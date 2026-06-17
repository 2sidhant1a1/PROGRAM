/*
Problem Statment:-what is the smallest sum of two numbers formed from the digits of an array.
    input: 3,4,5,6,8,2
    Output:
     sum = 604
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,4,5,8,6,2,9,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //minimum heap is used to arrange digit.
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(int elem: arr)
    {
        min_heap.push(elem);
    }

    int sum1=0, sum2=0;
    for(int i=0; !min_heap.empty() ; i++)
    {
        if(i%2==0)
        {
            sum1=sum1*10+min_heap.top();
            min_heap.pop();
        }
        else
        {
            sum2=sum2*10+min_heap.top();
            min_heap.pop();
        }
    }

    cout<<"sum = "<<sum1+sum2;
}