# include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip= "the sky is blue";
    ip = ip + ' ';
    string word = "";
    string ans = "";
     for(char c: ip)
     {
        if(c != ' ')
        {
            word += c;
        }
        else
        {
            ans = " "+word+ans;
            word ="";
        }
        
     }
    cout<<ans<<endl;
    return 0;
    
}