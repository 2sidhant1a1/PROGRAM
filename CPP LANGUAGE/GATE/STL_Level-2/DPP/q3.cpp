# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,3,3,5};
    int n= sizeof(a)/sizeof(a[0]);
    vector<int>num;
    num.push_back(a[0]);
    for(int i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
        {
            num.push_back(a[i]);
        }
    }
    int i=0;
    for(int elem: num)
    {
        a[i++]=elem;
    }
    for(i; i<n; i++)
    {
        a[i]=0;
    }
    cout<<"Length of non duplicate = "<<num.size();
    cout<<"\nwithout duplicate elemen are = "<<endl;
    for(int elem: a)
    {
        cout<<elem<<" ";
    }
}