/*WAP in CPP to join to sorted array using mergeAlgo.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,6,7,8,9,10};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    vector<int> c;

    int j=0, k=0;
    while(k<n && j<m)
    {
        if(a[k] < b[j])
        {
            c.push_back(a[k]);
            k++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }
 
    while(k<n)
    {
        c.push_back(a[k]);
        k++;
    }

    while(j<m)
    {
        c.push_back(b[j]);
        j++;
    }

    for(int elem: c)
        cout<<elem<<" ";

    return 0;
}