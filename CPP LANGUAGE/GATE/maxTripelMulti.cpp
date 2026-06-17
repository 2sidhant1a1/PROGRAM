# include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,-4,3,-6,7,0};
    int n= sizeof(a)/sizeof(a[0]);
    int max1=a[0], max2=INT_MIN, max3=INT_MIN;
    for(int i=1; i<n; i++)
    {
        if(max1<a[i])
        {
            max3=max2;
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i])
        {
            max3 = max2;
            max2 = a[i];
        }
        else if(max3<a[i])
        {
            max3 = a[i];
        }
    }
    int min1=a[0], min2=a[1];
    for(int i=0; i<n; i++)
    {
        if(min1>a[i])
        {
            min2=min1;
            min1=a[i];
        }
        else if(min2>a[i])
        {
            min2=a[i];
        }
    }
    cout<<max1<<max2<<max3<<endl;
    if(((max1*max2)*max3)>(min1*min2*max1))
    {
        cout<<"max multiplication = "<<(max1*max2)*max3;
    }
    else
    {
        cout<<"Max multiplication = "<<min1*min2*max1;
    }
    
}