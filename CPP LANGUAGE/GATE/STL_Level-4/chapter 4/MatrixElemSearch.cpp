/*
Problem statem: find the element from the given matrix.

*/

# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5] = {
        {1, 2, 58, 4, 56},
        {50, 61, 7, 8, 55},
        {9, 10, 171, 12, 56},
        {13, 14, 815, 16, 55},
        {55, 55, 55, 5, 55}
    };
    int k=5;
    int row = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(a[0][0]);
    for(int i=0; i<row; i++)
    {
        sort(a[i],a[i]+cols);

        int low=0, high = row-1, mid;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(a[i][mid] == k)
            {
                cout<<"Row = " << i << ", Column = " << mid;
                return 0;
            }
            else if(a[i][mid] < k)
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
    }
    cout<< "Element of " << k << " is not found. "<< endl;

}