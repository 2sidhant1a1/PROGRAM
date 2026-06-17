# include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,3,10,6,4,8,1};
    int sizeOfArray=sizeof(arr)/sizeof(arr[0]);
    int max_elem=arr[sizeOfArray-1];

    vector<int> leader;
    
    leader.push_back(max_elem);
    
    for(int i=sizeOfArray-2; i>=0; i--)
    {
        if(arr[i]>max_elem)
        {
            leader.push_back(arr[i]);
            max_elem=arr[i];
        }
    
    }
    
    int num=leader.size();

    for(int i=num-1; i>=0; i--)
        cout<<leader[i]<<endl;
    
    return 0;
}