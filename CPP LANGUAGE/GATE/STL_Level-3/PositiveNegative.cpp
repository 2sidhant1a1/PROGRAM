/*
Problem Statement: Given an array arr[] of size n, the task is to rearrange it in an alternate positve 
and negative manner without changing the relative order of positive and nefative numbers.
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-5,-2,5,2,4,7,1,8,0,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    deque<int> pos;
    deque<int> neg;
    for(int elem: arr)
    {
        if(elem>=0)
        {
            pos.push_back(elem);
        }
        else
        {
            neg.push_back(elem);
        }
    }
    for(int i=0; i<n; i++)
    {
        if((i%2==0 || neg.empty()) && !pos.empty())
        {
            arr[i]=pos.front();
            pos.pop_front();
        }
        else
        {
            arr[i]=neg.front();
            neg.pop_front();

        }
    }
    for(int elem: arr)
    {
        cout<<elem<<endl;
    }
}