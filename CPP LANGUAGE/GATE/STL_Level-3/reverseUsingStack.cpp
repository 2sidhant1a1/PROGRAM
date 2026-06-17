/*
Reverse a string using stack
*/

# include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Hello";
    stack <char> s;
    int i=0;
    for(char c: str)
    {
        s.push(c);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}