/*
Problem Statement: Given an array of integers arr[], the task is to move all the zero to the end of the array while maintaining 
    the relative order of all non-zero elements.
            Input: a[]={ 1,2,0,4,3,0,5,0}
            Output:
            a[]={1,2,3,4,5,0,0,0}
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,0,4,3,0,5,0};
    int n=sizeof(a)/sizeof(a[0]);

    int zero=0;
    int index=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
        else
        {
            a[index++]=a[i];
        }
    }
    int i=n-1;
    while(zero!=0)
    {
        a[i--]=0;
        zero--;
    }
    for(int elem: a)
    {
        cout<<elem<<" ";
    }
    return 0;              
}