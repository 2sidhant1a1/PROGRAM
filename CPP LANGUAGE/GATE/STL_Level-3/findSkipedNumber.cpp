# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={-15, -10, 14, 15, 20, 30, 31, 45};
    int lower=-50, upper=50;

    int n=sizeof(a)/sizeof(a[0]);
    vector<pair<int , int>> v;

    if(a[0]!=lower)
        {
            v.push_back({lower, a[0]-1});
        }
    for(int i=0; i<n-1; i++)
    {
        if( a[i] != a[i+1]-1)
        {
            v.push_back({a[i]+1,a[i+1]-1});
        }
    }
    if(upper != a[n-1])
    {
        v.push_back({a[n-1]+1,upper});
    }
    cout<<" { ";
    for (auto &p : v) {
        cout << " ( " << p.first << ", " << p.second << " ) ,";
    }
    cout<<"}";
    return 0;
}