/*
Given an array, divide it into 3 contiguous non-empty segments with equal sum. 
Basically, return an array [i,j] such that [a_0 , a_i] [a_i+1 , a_j] [a_j+1 , a_n-1].
If no such [i,j] possible return [-1,-1].
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={4,3,1,0,4};
    int n=sizeof(a)/sizeof(a[0]);

    int totalSum=0;
    for(int elem: a)
    {
        totalSum += elem;
    }
    
    if(totalSum % 3 != 0)
    {
        cout<<"[-1 , -1]";
        return 0;
    }

    int sum=0,count=1;
    int i,j;
    vector<int> v;
    for(int k=0; k<n; k++)
    {
        sum +=a[k];
        if(sum==totalSum/3)
        {   
            sum = 0;
            count++;
            v.push_back(k);
        }   
    }
    if(count>=3)
    {

        cout<<"["<<v[0]<<" , "<<v[1]<<"]"<<endl;
    }
    else
    {
        cout<<"[-1 , -1]";
    }
}
