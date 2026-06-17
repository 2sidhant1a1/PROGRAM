# include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter sentence:-\n";
    cin>>str;

    string output = "";
    
    int length = str.size();

    int k=0;
    for(char i: str)
    {
        output = output + i;
        
        for(int j=0; j<k ; j++)
        {
            if(i == str[j])
            {
                output = output + i;
            }
        }
        k++;
    }
    cout<<output;
    
}