# include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> a={5,8,3,4};
    cout<< a.front()<<endl;
    cout<< a.back() <<endl;

    a.pop_back();
    a.pop_front();
    cout<< a.front()<<endl;
    cout<< a.back() <<endl;
    cout<<"\nsize after pop is : "<<a.size()<<endl;

    a.push_back(6);
    a.push_front(10);
    cout<<"\nsize after push is : "<<a.size()<<endl;
    cout<< a.front()<<endl;
    cout<< a.back() <<endl;

    for(int elem: a)
    {
        cout<<elem<<endl;
    }
    

    auto it = a.begin();
    advance(it,2);
    a.insert(it, 3,20);
    cout<<"After Insertion.\n";
    for(int elem: a)
    {
        cout<<elem<<endl;
    }

    return 0;
}