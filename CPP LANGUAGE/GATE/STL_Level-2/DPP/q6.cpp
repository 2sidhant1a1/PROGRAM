# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,0,0,0};
    int b[]={2,5,6};
    int m= sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    int i=n-1, j=m-1, k=0;
    while(i<m && j<n)
    {
        if(b[j]>b[i] )
        {
            a[i-1]=a[i];
            a[i]=b[j];
            j--;
        }
        // else if(b[j]==a[i])
        // {
        //     a[i+1]=a[i];
        //     a[i]=b[j];
        //     j++;
        //     i++;
        // }
        else
        {   
            i--;
        }
    }
    for(int elem: a)
    {
        cout<<elem<<endl;
    }

}