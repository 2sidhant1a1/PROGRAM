#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[5][5] = {
        {1, 2, 3, 4, 56},
        {5, 6, 7, 8, 55},
        {9, 10, 11, 12, 56},
        {13, 14, 15, 16, 55},
        {55, 55, 55, 5, 55}
    };

    int row = sizeof(b) / sizeof(b[0]);
    int cols = sizeof(b[0]) / sizeof(b[0][0]);

    int top = 0, bottom = row - 1;
    int left = 0, right = cols - 1;

    vector<int> d;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            d.push_back(b[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            d.push_back(b[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                d.push_back(b[bottom][i]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                d.push_back(b[i][left]);
            left++;
        }
    }

    for (int i : d)
    {
        cout << i << " , ";
    }

    return 0;
}














// Its my own code

/*
    int i=0;
    int j=0;
    int k=1;
    int flag=1;
    
        while(flag)
        {
            while(j<cols-k)
            {
                cout<<b[i][j++]<<endl;
            }
            while(i<row-k)
            {
                cout<<b[i++][j]<<endl;
            }
            if((k+1)!=row)
                cout<<b[i][j]<<endl;
            while(j>=k)
            {
                cout<<b[i][--j]<<endl;
            }
            while(i>k)
            {
                cout<<b[--i][j]<<endl;
            }
            j=k;
            i=k;
            k++;
            if(k==row )
                break;
        }
*/