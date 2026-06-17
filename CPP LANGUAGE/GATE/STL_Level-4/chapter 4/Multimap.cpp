# include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, string> mm={
        {1, "Aj"},
        {1, "Aditya"},
        {2, "Shayam"},
        {2, "Sunny"}
    };
                // OR
    mm.insert({3, "Vikash"});
    mm.insert({3, "Shuresh"});

    for(auto elem: mm)
    {
        cout << elem.first << " : " << elem.second <<endl;
    }

    cout<<"_____________________Use begin to find first element_______________________________________"<<endl;

    auto b = mm.begin();
    cout<< b->first << " : " << b -> second <<endl;
    auto chan = next(b, 5);
    cout<< chan->first << " : " << chan -> second <<endl;
    
    cout<<"____________________________After changing Shuresh to shur________________________________"<<endl;
    chan->second = "shur";

    for(auto elem: mm)
    {
        cout << elem.first << " : " << elem.second <<endl;
    }
    
    cout<<"____________________________After changing shur to shuresh________________________________"<<endl;
    for(auto i= mm.begin(); i!=mm.end(); i++)
    {
        if(i->second=="shur")
        {
            i->second="shuresh";
        }
    }
    for(auto elem: mm)
    {
        cout << elem.first << " : " << elem.second <<endl;
    }

    cout<<"____________________________Using erase to delete all key________________________________"<<endl;
    
    mm.erase(3);
    for(auto elem: mm)
    {
        cout << elem.first << " : " << elem.second <<endl;
    }

    cout<<"____________________________Using erase to delete element________________________________"<<endl;
    mm.erase(mm.find(2));
    for(auto elem: mm)
    {
        cout << elem.first << " : " << elem.second <<endl;
    }


}