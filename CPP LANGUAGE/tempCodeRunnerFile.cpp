#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    cin.ignore();  // Consume newline

    vector<vector<char>> arr(h, vector<char>(w));
    int posx = -1, posy = -1;

    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);

        for (int j = 0; j < w; j++) {
            arr[i][j] = row[j];
            if (row[j] == 'X') {
                posx = i;
                posy = j;
            }
        }
    }
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }

    int gold = 0;
    bool flag = true;

    while (flag) {
        int row = posx;
        int col = posy;

        if (col < w - 1 && arr[row][col + 1] != '#') {
            arr[posx][posy] = '#';
            posy++;

        } else if (row < h - 1 && arr[row + 1][col] != '#') {
            arr[posx][posy] = '#';
            posx++;
        } else if (col > 0 && arr[row][col - 1] != '#') {
            arr[posx][posy] = '#';
            posy--;
        } else if (row > 0 && arr[row - 1][col] != '#') {
            arr[posx][posy] = '#';
            posx--;
        } else {
            flag = false;
        }

        // Collect gold if it's a valid number (0-9)
        if (isdigit(arr[posx][posy])) {
            gold += arr[posx][posy] - '0';
        }
        cout<<"gold"<<gold<<endl;
    }

    cout <<"hi"<< endl;
    return 0;
}