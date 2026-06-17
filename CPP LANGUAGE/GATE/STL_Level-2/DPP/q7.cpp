# include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="anagram";
    string t="nagaram";

    int c1[26]={0};

    for(char s: s)
    {
        c1[s-'a'] += 1;
    }

    for(char t: t)
    {
        c1[t-'a'] -= 1;
    }

    string flag="True";
    for(int elem: c1)
    {
        if(elem!=0)
        {
            flag="false";
        }
    }

    cout<<flag;
}