/*
Problem Statment: 
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,3,-8,7,-1,2,-15,3};

    int n=sizeof(a)/sizeof(a[0]);

    int sum=0;
    for(int i: a)
    {
        sum=sum+max(sum+i, i);
    }
    cout<<"Maximum sum: "<<sum<<endl;
    return 0;
}