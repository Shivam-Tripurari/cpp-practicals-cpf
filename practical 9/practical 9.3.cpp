#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"********************************************"<<endl;
    cout<<"\tMEMORY ORGANIZATION ANALYZER"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"\n--------------- Stack Memory ----------------"<<endl;
    int x=100;
    int *p=new int(250);
    cout<<"Local Variable Value : "<<x<<endl;
    cout<<"Memory Address : "<<&x<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"\n--------------- Dynamically Allocated Memory ------------"<<endl;
    cout<<"Allocated Value : "<<*p<<endl;;
    cout<<"Memory Address : "<<p<<endl;
    cout<<"---------------------------------------------"<<endl;
    int a=50;
    int *q=&a;
    int **r=&q;
    int ***s=&r;
    cout<<"\n----------- Multi-level Referencing ----------"<<endl;
    cout<<"Original Value : "<<a<<endl;
    cout<<"Single-level-address : "<<q<<endl;
    cout<<"Double-level-address : "<<r<<endl;
    cout<<"Triple-level-address : "<<s<<endl;
    cout<<"Value Access Thorugh Three Levels : "<<***s<<endl;
    cout<<"---------------------------------------------"<<endl;
    delete(p);
    p=nullptr;
    cout<<"--------------- Memory Safety ----------------"<<endl;
    cout<<"Null Reference"<<endl;
    cout<<"Safe (Reference is NULL)"<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<"Invalid Reference"<<endl;
    cout<<"Memory Released Successfully"<<endl;
    cout<<"Reference Invalid"<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<"Uninitialized Address Variable"<<endl;
    cout<<"Unsafe to Access"<<endl;
    cout<<"---------------------------------------------"<<endl;
    return 0;
}


