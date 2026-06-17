# include<bits/stdC++.h>
using namespace std;
int main()
{
    int a[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int b[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(a[0])/sizeof(a[0][0]);

    int sum[row][cols];
    int mul[row][cols];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];

            mul[i][j]=0;
            for(int k=0; k<row; k++)
            {
                mul[i][j] += a[i][k]*b[k][j];
            }  

        }

    }

    cout<<"sum of matrix :- \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
            cout<<sum[i][j]<< " ";
        cout<<endl;
    }
    cout<<"Multiplication of matrix :- \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
            cout<<mul[i][j]<<" ";
        cout<<endl;
    }

}