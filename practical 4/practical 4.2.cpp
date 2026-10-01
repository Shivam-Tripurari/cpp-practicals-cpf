#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int physics,chem,maths,total_marks;
    float avg;

    cin>>physics;
    cin>>maths;
    cin>>chem;

    total_marks=physics+chem+maths;
    avg=total_marks/3.00;



    cout<<"********************************************************************************"<<endl<<
        "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
        "*********************************************************************************"<<endl<<endl<<endl;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<
        "                academic summary                    "<<endl<<
        "-----------------------------------------------------------------------------------"<<endl;

    cout<<"Total marks"<<setw(5)<<":"<<total_marks<<endl;
    cout<<"Average marks"<<setw(3)<<":"<<avg<<endl;
    cout<<"percentage"<<setw(6)<<":"<<avg<<"%"<<endl<<endl<<endl;

    cout<<"-----------------------------------------------------------------------------------"<<endl<<
        "                academic result                      "<<endl<<
        "-----------------------------------------------------------------------------------"<<endl;

    if (physics>100||physics<0||maths>100||maths<0||chem>100||chem<0)
    {
        cout<<"invalid input";
    }
    else
    {
        if(avg>=40)
        {
            cout<<"result"<<setw(9)<<":"<<"pass"<<endl;
            if(avg>=90)
            {
                cout<<"grade"<<setw(10)<<":"<<"O"<<endl;
                cout<<"performance"<<setw(4)<<":"<<"outstanding"<<endl;
            }
            else if(avg<90||avg>=80)
            {
                cout<<"grade"<<setw(10)<<":"<<"A+"<<endl;
                cout<<"performance"<<setw(4)<<":"<<"excellent"<<endl;
            }
            else if(avg<80||avg>=70)
            {
                cout<<"grade"<<setw(10)<<":"<<"A"<<endl;
                cout<<"performance"<<setw(4)<<":"<<"very good"<<endl;
            }
            else if(avg<70||avg>=60)
            {
                cout<<"grade"<<setw(10)<<":"<<"B"<<endl;
                cout<<"performance"<<setw(4)<<":"<<"Good"<<endl;
            }
            else if(avg<60|avg>=50)
            {
                cout<<"grade"<<setw(10)<<":"<<"B="<<endl;
                cout<<"performance"<<setw(4)<<":"<<"satisfactory"<<endl;
            }
            else if(avg<50||avg>=40)
            {
                cout<<"grade"<<setw(10)<<":"<<"C"<<endl;
                cout<<"performance"<<setw(4)<<":"<<"needs improvement"<<endl;
            }
        }

        else
        {
            cout<<"grade"<<setw(10)<<":"<<"F"<<endl;
            cout<<"performance"<<setw(4)<<":"<<"failed"<<endl;
        }
    }
}







