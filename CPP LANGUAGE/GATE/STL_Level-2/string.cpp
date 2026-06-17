# include<bits/stdc++.h>
using namespace std;
int main()
{
    string word="malayalam";
    int n = word.size();
    string drow=word;
    for(int i=0; i<=n/2; i++)
        swap(drow[i], drow[n-(i+1)]);
    if(word==drow)
        cout<<"palandrowm";
    else
        cout<<"not palandrowm";
    return 0;
}