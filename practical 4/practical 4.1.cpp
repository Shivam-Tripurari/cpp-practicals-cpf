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
        if(avg>=45)
        {
             cout<<"result"<<setw(9)<<":"<<"pass"<<endl<<endl;
             cout<<"congratulations ! you have successfully passed"<<endl<<endl;
        }
        else
        {
             cout<<"result"<<setw(9)<<"fail"<<endl<<endl;
             cout<<"sorry !you have failed the examination"<<endl<<endl;
        }
    }
    cout<<"-----------------------------------------------------------------------------------------";





}


