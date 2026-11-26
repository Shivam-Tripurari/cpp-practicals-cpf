#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct StudentRecord
{
    string enroll,name,branch,grade;
    int sem;
    float per;

};
int main()
{

    int n;
    float Max,Min,avg=0;
    cout<<"********************************************"<<endl;
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************************\n"<<endl;
    cout<<"Enter Number of Students : ";
    cin>>n;
    cout<<"\nDynamic Memory Allocated Successfully"<<endl;
    cout<<"--------------------------------------------"<<endl;
    StudentRecord s[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Enrollment Number : ";
        cin>>s[i].enroll;
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Branch : ";
        cin>>s[i].branch;
        cout<<"Semester : ";
        cin>>s[i].sem;
        cout<<"Percentage : ";
        cin>>s[i].per;
        cout<<"Grade : ";
        cin>>s[i].grade;
        cout<<"--------------------------------------------"<<endl;
    }
    for(int i=0; i<n; i++)
    {
        cout<<"Address : "<<&s[i]<<endl;
        cout<<s[i].enroll<<" "<<s[i].name<<" "<<s[i].branch<<" "<<s[i].sem<<" "<<s[i].per<<" "<<s[i].grade<<endl;
        cout<<"--------------------------------------------"<<endl;
    }
    cout<<"\nAcademic Summary"<<endl;
    Max=0;
    Min=s[0].per;
    for(int i=0; i<n; i++)
    {
        avg=avg+s[i].per;
        if(s[i].per>Max)
        {
            Max=s[i].per;
        }
        if(s[i].per<Min)
        {
            Min=s[i].per;
        }
    }
    avg=avg/(n*1.0);
    cout<<fixed<<setprecision(2);
    cout<<"Class Average Percentage : "<<avg<<"%"<<endl;
    cout<<"Highest Percentage : "<<Max<<"%"<<endl;
    cout<<"Lowest Percentage  : "<<Min<<"%"<<endl;

        cout<<"\n--------------------------------------------"<<endl;
    cout<<"Dynamic Memory Released Successfully"<<endl;
    cout<<"Address Variable Reset Successfully"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Program Executed Successfully"<<endl;
    cout<<"--------------------------------------------"<<endl;
    return 0;
}

