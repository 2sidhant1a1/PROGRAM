# include<bits/stdc++.h>
using namespace std;

class Car
{
    public:
    string brand;
    string color;
    int seats;

    public:
    Car(string b, string c, int s)
    {
        brand = b;
        color = c;
        seats = s;
    }
};
int main()
{
    Car c1("Mercedes", "Black", 5);

    cout<<"Brand is: "<<c1.brand<<endl;
    cout<<"Color is: "<<c1.color<<endl;
    cout<<"Seats are: "<<c1.seats<<endl;

    return 0;
}