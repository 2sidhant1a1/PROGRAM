/*
Problem statment:- Find the sum of all the element of the matrix.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row = sizeof(a)/sizeof(a[0]);
    int column = sizeof(a[0])/sizeof(a[0][0]);

    int sum=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            sum +=a[i][j];
        }
    }
    cout<<"Sum Of All Element Of The Matrix = "<<sum<<endl;
    
}