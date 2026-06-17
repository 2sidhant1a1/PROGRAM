# include<bits/stdc++.h>
using namespace std;

class ElectricCar
{
    public:
    int chargingTime = 7;
    void charge()
    {
        cout<<"Getting charge!"<<endl;
    }
};

class PetrolCar
{
    public:
    int fuelTankCapacity = 30;
    
    void fuel()
    {
        cout<<"Fuel is present!"<<endl;
    }
};

class HybridCar: public ElectricCar, public PetrolCar
{

};

int main()
{
    HybridCar hc;

    cout<<"Charging Time: "<<hc.chargingTime<<endl;
    cout<<"Petrol Tank Capacity: "<<hc.fuelTankCapacity<<endl;
    hc.charge();
    hc.fuel();

    return 0;
}