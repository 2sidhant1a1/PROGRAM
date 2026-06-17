# include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    public:
    string brand;
    string color;
    int sets;
};

class Car: public Vehicle
{
    public:
    string type = "Automatic";
};

class ElectricCar: public Car
{
    public:
    int chargingTime = 7;
};

int main()
{
    ElectricCar ec;

    cout<<"Brand is: "<<ec.brand<<endl;
    cout<<"Color is: "<<ec.color<<endl;
    cout<<"Seats is: "<<ec.sets<<endl;
    cout<<"Type is: "<<ec.type<<endl;
    cout<<"Charging time is: "<<ec.chargingTime<<endl;

    return 0;
}