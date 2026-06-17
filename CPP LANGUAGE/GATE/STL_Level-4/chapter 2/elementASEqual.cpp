#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={6,7,1,2,4,3,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int step=0;
    
    int equal=1;
    while(equal)
    {
        sort(arr, arr+n);

        for(int i=0; i<n-1; i++)
        {
            arr[i]++;
        }
        
        equal=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=arr[0])
            {
                equal=1;
                break;
            }
        }
        step++;

    }
    cout<<" Toal Step = "<<step<<endl;
}