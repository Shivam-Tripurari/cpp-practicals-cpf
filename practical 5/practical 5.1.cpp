#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,marks;
    int total=0;
    float avg;

     cout<<"********************************************************************************"<<endl<<
    "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
    "*********************************************************************************"<<endl<<endl<<endl;

    cout<<"enter number of subjects :";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i=i+1)
    {
        cout<<"enter marks of subject "<<i<<":"<<" ";
        cin>>marks;
        total=total+marks;
        avg=float(total)/n;
    }
    cout<<"total marks"<<setw(4)<<":"<<total<<endl;
    cout<<"average marks"<<setw(2)<<":"<<avg<<endl;
    cout<<"percentage"<<setw(5)<<":"<<avg<<"%"<<endl;

                if(avg>=40.0)
                {
                cout<<"result"<<setw(9)<<":"<<"pass"<<endl;
                }
                if(avg>=90.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"O"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"outstanding"<<endl;
                }
                else if(avg<90.0&&avg>=80.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"A+"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"excellent"<<endl;
                }
                else if(avg<80.0&&avg>=70.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"A"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"very good"<<endl;
                }
                else if(avg<70.0&&avg>=60.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"B"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"Good"<<endl;
                }
                else if(avg<60.0&&avg>=50.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"B="<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"satisfactory"<<endl;
                }
                else if(avg<50.0&&avg>=40.0)
                {
                    cout<<"grade"<<setw(10)<<":"<<"C"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"needs improvement"<<endl;
                }
                else
                {
                    cout<<"grade"<<setw(10)<<":"<<"F"<<endl;
                    cout<<"performance"<<setw(4)<<":"<<"failed"<<endl;
                }


}
