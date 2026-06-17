/*
Remove the middle element from the stack.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> num;
    for(int i=1; i<8; i++)
    {
        num.push(i);
        cout<<" "<<i;
    }

    int s=num.size();
    stack<int> n;

    int i=0;
    while(!num.empty())
    {
        if(i++ != s/2)
        {
            n.push(num.top());
        }  
        num.pop();

    }
    while(!n.empty())
    {
        num.push(n.top());
        n.pop();
    }
    cout<<endl;
    while(!n.empty())
    {
        cout<<" "<<num.top();
        num.pop();
    }
    return 0;
    
}