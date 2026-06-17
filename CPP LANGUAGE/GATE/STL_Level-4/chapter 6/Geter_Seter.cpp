# include<bits/stdc++.h>
using namespace std;

class Bank
{
    private:
    int income;

    public:
    //Setter function
    void setIncome(int i)
    {
        income = i;
    }
    // Getter function
    int getIncome()
    {
        return income;
    }
};

int main()
{
    Bank b;
    b.setIncome(20000);
    cout<<"Income is:"<<b.getIncome() << endl;

    return 0;
}