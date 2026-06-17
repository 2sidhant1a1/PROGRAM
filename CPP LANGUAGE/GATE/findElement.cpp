/*
Given a sorted array with duplicates, youneed to find the index of the 
last occcurance of the given number if it is present, eles -1.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,4,4,5,5,5,5,5,5,5,5,6,7,7,7,8};
    int x=5;
    int n = sizeof(a)/sizeof(a[0]);
    int ans=-1;
    int low=0, high = n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(a[mid]==x)
        {
            ans = mid;
            low = mid+1;
        }
        else if(a[mid] < x)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<"answer = "<<ans;
    return 0;
}