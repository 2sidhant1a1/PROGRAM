# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,6,1,9,4,5,3};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a,a+n);

    int streak=1;
    int ans=1;
    int streak_end = a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i-1]+1)
        {
           streak++;
        }
        else
        {
            streak = 1;
        }
        if(ans<streak)
        {
            streak_end = a[i];
            ans=streak; 
        }
    }
    cout<<"The end of the streak is: "<<streak_end;
    cout<<"\nThe elements int he longest streak are: ";
    for(int i=streak_end-ans; i<streak; i++)
    {
        cout<<a[i]<<" , ";
    }
    cout<<"\nThe max sequence length is: "<<ans;
}