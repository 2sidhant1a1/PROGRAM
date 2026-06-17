/*WAP in CPP to find the total maximum profit from the given value. */
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={100,180,260,310,40,535,695};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            profit += (a[i+1]-a[i]);
        }
    }
    cout<<"maximum profit = "<<profit<<endl;

    return 0;
}