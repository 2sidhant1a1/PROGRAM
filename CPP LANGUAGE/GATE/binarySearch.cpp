/*WAP in CPP to find the value in given number using binary search. */
# include<bits/stdc++.h>
using namespace std;
int findTarget(int *a, int low,int high,int target)
{
    if(low>high)
    {
        return 0; 
    }
    int mid = (low+high)/2;
    if( a[mid] == target )
    {
        cout<<target<<" is found in "<<mid<<" index of the given array "<<endl;
        return 1;
    }
    else  if( a[mid] < target )
    {
        findTarget(a,mid+1,high,target);
    }
    else
    {
        findTarget(a,low,mid-1,target);
    }
    
}
int main()
{
    int a[]={2,4,5,7,8,11,15};
    int target = 7;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int low=0, high=n-1;
    int b=findTarget(a,low,high,target);
    if(b == 0)
        cout<<target<<" is not found in given array."<<endl;
    return 0;

}