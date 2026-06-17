/*
Use a stack to track opening and closing brackets. 
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="([]){}";
    stack<char> stk;
    int flag=0;
    for(char c: str)
    {
        if(c=='(' || c=='{' || c=='[')
        {
            stk.push(c);

        }
        else if(!stk.empty() && (c==stk.top()+1 || c==stk.top()+2)  )
        {
            stk.pop();
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0 && stk.empty())
    {
        cout<<"valid parentheses";
    }
    else
    {
        cout<<"Invalid parentheses";
    }
    return 0;
}