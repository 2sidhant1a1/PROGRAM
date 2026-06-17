# include<bits/stdc++.h>
using namespace std;
int main()
{
    //set use
    cout<<"Set :- \n";
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    for(int x: s)
    {
        cout<<x<<" < ";
    }
    cout<<endl;
    cout<<"size of set= "<<s.size()<<endl;
    //clear use
    cout<<"clear the set:- \n";
    s.clear();
    for(int elem: s)
    {
        cout<<elem<<" > ";
    }
    cout<<"size of set= "<<s.size()<<endl;




    //set arrange number in decending order
    cout<<"\nset from decending order:-\n";
    set<int, greater<int>> num = {2,4,7,1,6};
    for(int elem: num)
    {
        cout<<elem<<" > ";
    }
    cout<<endl;
    cout<<"size of set= "<<num.size()<<endl;
    //Erase use
    cout<<"Erase 4,1 from decending order set:- \n";
    num.erase(4);
    num.erase(1);
    for(int elem: num)
    {
        cout<<elem<<" > ";
    }
    cout<<endl;
    cout<<"size of set= "<<num.size()<<endl;


    

    //Unordered_set use
    cout<<"\nUnordered_set :- \n";
    unordered_set<int> us;
    us.insert(10);
    us.insert(50);
    us.insert(20);
    us.insert(10);
    us.insert(30);
    for(int x: us)
    {
        cout<<x<<" -> ";
    }
    cout<<endl;
    cout<<"size of unorder_sort= "<<us.size()<<endl;




    //set in string
    cout<<"\nset besed on string: -\n";
    set<string> names = {"sidhant","subham", "sunny", "shashi", "sumit"};
    for(string si: names)
    {
        cout<<si<<", ";
    }
    cout<<endl;

    cout<<"use begin for print first name:-\n";
    auto it=names.begin();
    cout<< *it <<endl;
    //use next
    cout<<"Use Next for print 3 name before begin:-\n ";
    auto it1 = next(it,3);
    cout<<*it1<<endl;

    return 0;
}