#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int physics,chem,maths,total_marks,ch,sem;
    float avg;
    string en,name,branch,mob;





menu:
    cout<<"********************************************************************************"<<endl<<
        "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
        "*********************************************************************************"<<endl<<endl<<endl;

    cout<<"----------------------------------MAIN MENU--------------------------------------------"<<endl;
    cout<<"1. Register new student"<<endl<<
        "2. Display Student record"<<endl<<
        "3. enter student marks"<<endl<<
        "4. Display Academic result"<<endl<<
        "5. exit"<<endl<<endl<<
        "enter  your choice:";
    cin>>ch;

    cout<<endl<<endl;


    switch(ch)
    {
    case 1:
        cout<<"-----------------------------------------------------------------------------------"<<endl<<
            "                student registration                       "<<endl<<
            "-----------------------------------------------------------------------------------"<<endl;
        cout<<"enrollment no.:";
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
        cout<<"student registered successfully"<<endl<<
            "-----------------------------------------------------------------------------------------------"<<endl;
        goto menu;

    case 2:

        cout<<"\n-------------------------------student record-------------------------------------------------"<<endl;
        cout<<"enrollment number:"<<en<<endl;
        cout<<"student name"<<setw(2)<<":"<<name<<endl;
        cout<<"branch"<<setw(8)<<":"<<branch<<endl;
        cout<<"semester"<<setw(6)<<":"<<sem<<endl;
        cout<<"phone number"<<setw(2)<<":"<<mob<<endl;
        goto menu;


    case 3:
        cout<<"enter maths marks"<<setw(3)<<":";
        cin>>maths;
        cout<<"enter physics marks"<<setw(1)<<":";
        cin>>physics;
        cout<<"enter chem marks"<<setw(4)<<":";
        cin>>chem;
        cout<<"marks entered successfully.\n";
        goto menu;


    case 4:
        total_marks=physics+chem+maths;
        avg=total_marks/3.00;

        cout<<"Total marks"<<setw(5)<<":"<<total_marks<<endl;
        cout<<"Average marks"<<setw(3)<<":"<<avg<<endl;
        cout<<"percentage"<<setw(6)<<":"<<avg<<"%"<<endl<<endl<<endl;

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
            else if(avg<60||avg>=50)
            {
                cout<<"grade"<<setw(10)<<":"<<"B="<<endl;
                cout<<"performance"<<setw(4)<<":"<<"satisfactory"<<endl;
            }
            else if(avg<50||avg>=40)
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
        goto menu;


    default:
        cout<<"program terminated";
        goto end;
    }
end:
    return 0;


}






