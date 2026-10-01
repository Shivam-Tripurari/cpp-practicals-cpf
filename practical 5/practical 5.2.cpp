#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    long int mob;
    short int sem;
    string en,name,branch;
    string ch;
    cout<<"*********************************************************************************"<<endl<<
    "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
    "*********************************************************************************"<<endl<<endl<<endl;
    do
{




    cout<<endl<<"enrollment no:";
    cin>>en;
    cout<<endl;
    cout<<"student name"<<setw(2)<<":";
    cin>>name;
    cout<<endl;
    cout<<"branch"<<setw(8)<<":";
    cin>>branch;
    cout<<endl;
    cout<<"semester"<<setw(6)<<":";
    cin>>sem;
    cout<<endl;
    cout<<"phone number"<<setw(2)<<":";
    cin>>mob;
    cout<<endl<<endl;
    cout<<"student registered successfully"<<endl;

    cout<<"register another student?(Y/N):";
    cin>>ch;
    }
    while(ch=="y"||ch=="Y");
}





