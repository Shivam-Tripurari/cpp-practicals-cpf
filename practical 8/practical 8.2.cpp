#include<iostream>
using namespace std;

int serviceCharge=50;

void displayHeader()
{
    cout<<"**********************************************************"<<endl;
    cout<<"         ELECTRICITY BILL CAlCULATOR\n";
    cout<<"**********************************************************"<<endl;
}

int getRate()
{
    int rate;

    cout<<"Enter Electricity rate per unit:";
    cin>>rate;

    return rate;
}

void displayUnitsRate(int units,int rate)
{
    cout<<"Units Consumed: "<<units<<endl;
    cout<<"Rate per unit : Rs."<<rate<<endl;
}

float calculateBill(int units,int rate)
{
    return units*rate;
}
 void changeunitsvalue(int units)
 {
    units=units+10;
    cout<<"Inside call by value:"<<units<<endl;
 }
void changeUnitsReference(int &units)
{
    units=units+10;
    cout<<"Inside call by value:"<<units<<endl;
}
void showScope()
{
    int serviceCharge=100;
    cout<<"Global Service Charge:Rs."<<serviceCharge<<endl;
}
void displayBill(int amount,int serviceCharge)
{
    cout<<amount;
    cout<<serviceCharge;
}




int main()
{
    int units,rate,amount;
    displayHeader();

    cout<<"Enter electricity units consumed:";
    cin>>units;


    rate=getRate();
    displayUnitsRate(units,rate);

    cout<<endl;
    cout<<"--------Call by Reference-----------"<<endl;
    changeUnitsReference(units);

    cout<<" After function: "<< units <<endl;

    amount= calculateBill(units,rate);

    cout<<endl;
    cout<<"Updated Electricity Bill" <<endl;

    showScope();

    displayUnitsRate(units,rate);
    displayBill(amount,serviceCharge);

}
