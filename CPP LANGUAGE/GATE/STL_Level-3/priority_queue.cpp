# include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"\nFor max Heap : -\n";
    priority_queue<int> pq;
    pq.push(30);
    pq.push(20);
    pq.push(50);
    cout<<"Top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top after pop: "<<pq.top()<<endl;

    cout<<"\nFor min Heap : -\n";
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(30);
    pqm.push(20);
    pqm.push(50);
    cout<<"Top element: "<<pqm.top()<<endl;
    pqm.pop();
    cout<<"Top after pop: "<<pqm.top()<<endl;
    return 0;
}