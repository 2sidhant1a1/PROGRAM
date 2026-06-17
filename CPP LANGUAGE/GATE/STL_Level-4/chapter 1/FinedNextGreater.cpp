# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,4,2,17,9,12};
    int n=sizeof(a)/sizeof(a[0]);

    int result[n];
    stack<int> s;

    for(int i=n-1; i>=0; i--)
    {
        while(!s.empty() && s.top() <a[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            result[i]=-1;
        }
        else
        {
            result[i]=s.top();
        }
        s.push(a[i]);
    }
    for(int elem: result)
    {
        cout<<elem<<endl;
    }

}