/*
Problem Statment:- Reverse array in groups of k
        Input: a={1,2,3,4,5,6,7,8,9}
        Ouput:
            {3,2,1,6,5,4,9,8,7}
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int i=0;
    for(i=0; i<n; i+=k)
    {
        reverse(arr+i, arr+k);
    }
    reverse(arr+(i-k), arr+n);
    for(int elem: arr)
    {
        cout<<elem<<endl;
    }
}