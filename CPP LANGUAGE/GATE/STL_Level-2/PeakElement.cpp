/*
    Given an array with all distinct elements. 
    You have to find the peak element.
    In the input array, first few elements are in increasing order and remaining element are in decreasing order.
                                                  OR
    Peak is greaterr than all the elements on its left and is lesser than all the elements on its right.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,5,6,8,10,12};
    int n=sizeof(a)/sizeof(a[0]);
    int left=0, right=n-1;
    while(left<=right)
    {
        int mid = (right+left)/2;
        if(a[mid]<a[mid+1] && mid<n-1)
        {
            left = mid +1;
        }
        else if(a[mid]<a[mid - 1] && mid>0)
        {
            right = mid-1;
        }
        else
        {
            cout<<"peak value = "<<a[mid]<<endl<<"Index = "<<mid;
            break;
        }
    }
    
    /* for(int i=1; i<n; i++)
    {
        if(maxLeft<=a[i])
        {
            maxLeft=max(maxLeft,a[i]);

        }
        if(maxRight<=a[n-i-1])
        {
            maxRight=max(maxRight,a[n-i-1]);
        }
        else
        {
            break;
        }
        
    }
    if(maxLeft==maxRight)
    {
        cout<<"peak value = "<<maxLeft;
    }
    else
    {
        cout<<"not persent";
    }*/
    return 0;
}