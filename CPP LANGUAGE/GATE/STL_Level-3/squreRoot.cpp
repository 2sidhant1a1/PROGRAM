/*
Find the square root of the given number without using the pre-defined function.
If not a perfect square, return the largest integer smaller than its squareRoot.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=16;
    int low=1, high=num;
    int ans=1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(mid*mid<=num)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<"squre root of "<<num<<" is = "<<ans;
    
    return 0;
}