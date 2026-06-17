# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int k=3;
    int n= sizeof(a)/sizeof(a[0]);
    
    reverse(a,a+n);
    reverse(a,a+k);
    reverse(a+k,a+n);
    for(int elem: a)
    {
        cout<<elem<<endl;
    }
}