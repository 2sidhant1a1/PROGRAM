/*

*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<string> dq ={"sidhant","vivekanand","rajaramnath govind","lalarajpath roye"};

    cout<<"Front element is : "<<dq.front()<<endl;
    cout<<"Back element is: "<<dq.back()<<endl;

    cout<<"\nprint element using for loop :-"<<endl;
    for(string s: dq)
    {
        cout<<s<<endl;
    }

    cout<<"\nPrint element using index number:-"<<endl;
    cout<<dq[0]<<endl;
    cout<<dq[1]<<endl;

    //dq[5]for skip or at(5)for terminating when index is not persent.
    cout<<"\nusing at which termenating code when index is not found."<<endl;
    dq[0] = "Aj";
    cout<< dq.at(0)<<endl;

    dq.push_front("Aditya");
    dq.push_back("Shiljeet");

    //front() & back()
    cout<<"New Front element: "<<dq.front()<<endl;
    cout<<"New Back element: "<<dq.back()<<endl;

    //size()
    cout<<"THe number of elements are: "<<dq.size()<<endl;

    dq.pop_front();
    cout<<"New fornt is: "<<dq.front()<<endl;
    cout<<"New size is: "<<dq.size()<<endl;

    //empty()
    cout<<"Is this Empty: "<<dq.empty()<<endl;
}