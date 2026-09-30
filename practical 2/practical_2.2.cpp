#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"**************************************************"<<endl<<
        "         STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
        "**************************************************"<<endl<<endl<<
        "software version"<<setw(5)<<":"<<"1.1"<<endl<<
        "institute"<<setw(12)<<":"<<"charusat"<<endl<<
        "academic year"<<setw(8)<<":"<<"2026-27"<<endl<<
        "------------------------------------------"<<endl<<
        "         Student registration"<<endl<<
        "------------------------------------------"<<endl<<endl;

        int a,d,e;
        string b,c;

        cout<<"enter enrollment no."<<":";
        cin>>a;
        cout<<"enter student name"<<":";
        cin>>b;
        cout<<"enter branch"<<":";
        cin>>c;
        cout<<"enter semester"<<":";
        cin>>d;
        cout<<"enter mobile number"<<":";
        cin>>e;

        cout<<"------------------------------------------"<<endl<<
        "          Student Information"<<endl<<
        "------------------------------------------"<<endl<<endl;

        cout<<"enrollment no."<<setw(6)<<":"<<a<<endl;
        cout<<"student name"<<setw(8)<<":"<<b<<endl;
        cout<<"branch"<<setw(14)<<":"<<c<<endl;
        cout<<"semester"<<setw(12)<<":"<<d<<endl;
        cout<<"mobile no"<<setw(11)<<":"<<e<<endl;

        cout<<"------------------------------------------"<<endl;

return 0;
}
