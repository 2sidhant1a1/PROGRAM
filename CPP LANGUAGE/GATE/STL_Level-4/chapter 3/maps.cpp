# include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, string> students;
    students['a'] = "Alice";
    students['c'] = "Bharlie";
    students['b'] = "cob";
    for(auto it: students)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }



    // Lower bound
    map<int, string> m =
    {
        {3, "A"},
        {5, "B"},
        {7, "C"},
        {10, "D"},
        {12, "E"},
        {15, "F"}
    };

    // Lower bound (>=)
    auto it = m.lower_bound(6);
    cout<< it->first << " " << it->second << endl;

    // Upper bound (>)
    auto it1 = m.upper_bound(10);
    cout<< it1->first << " " << it->second << endl;

    // Distance 
    cout<<"Number of elements less than 6 : " << distance(m.begin(), it) << endl;
    cout<<"Number of elements greater than 6 : " << distance(it, m.end()) << endl;
    cout<<"Number of elements greater than 10 : " << distance(it1, m.end()) << endl;

    return 0;

}