# include<bits/stdc++.h>
using namespace std;
// Perent class 
class Car
{
    public:
    string brand = "Suzuki";

    public:
    void applyHorn()
    {
        cout<<"Peep Peop!"<<endl;
    }
};
// Derived class | child class
class Sedan : public Car
{
    public:
    string model = "Swift Dzire";
};

int main()
{
    Car c1;

    cout<<"Brand is: " << c1.brand << endl;

    Sedan s;
    cout<<"Brand is: " << s.brand <<endl;
    cout<<"MOdel is: " << s.model <<endl;
    return 0;
}