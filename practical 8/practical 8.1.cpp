#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
using namespace std;

void displayHeader()
{
    cout<<"*****************************************************************************************"<<endl<<
        "                         STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
        "*****************************************************************************************"<<endl;

}

void acceptStudentdetails(char (&enrollment_no)[10],char (&name)[15],char (&branch)[10],
                          int &semester, int (&marks)[5])
{
    cout<<"-------------------Student registration-----------------------\n";
    cout<<"Enter enrollment number: ";
    cin.getline(enrollment_no,10);
    cout<<"Enter student name: ";
    cin.getline(name,15);
    cout<<"Enter Branch: ";
    cin.getline(branch,15);
    cout<<"Enter Semester: ";
    cin>>semester;

    cout<<"Enter Marks"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter Subject "<<i+1<<":";
        cin>>marks[i];
    }

}
void calculateAcademicResult(int (&marks)[5],int &totalmarks,float &percentage,char (&grade)[17],char (&result)[16])

{
    totalmarks=0;
    for(int i=0; i<5; i++)
    {
        totalmarks=totalmarks+marks[i];
    }

    percentage=totalmarks/5.00;

    bool score=true;
    for(int i=0; i<5; i++)
    {
        if(marks[i]<40)
        {
            score=false;
        }

    }
    if(score==true)
    {
        strcpy(result,"pass");
    }
    else
    {
        strcpy(result,"fail");
    }

    if(percentage>=90)
    {
        strcpy(grade,"S");
    }
    else if(percentage<90 && percentage>=80)
    {
        strcpy(grade,"A+");
    }
    else if(percentage<80 && percentage>=70)
    {
        strcpy(grade,"B+");
    }
    else if(percentage<70 && percentage>=60)
    {
        strcpy(grade,"C+");
    }
    else if(percentage<60 && percentage>=50)
    {
        strcpy(grade,"D+");
    }
    else if(percentage<50 && percentage>=40)
    {
        strcpy(grade,"E");
    }
    else
    {
        strcpy(grade,"F");
    }


}
void acceptStudentdetails(char (&enrollment_no)[10],char (&name)[15],char (&branch)[10],
                          int &semester,int &totalmarks,float &percentage,char (&grade)[17],char (&result)[16])
{

    cout<<"Enrollment Number : "<<enrollment_no<<endl<<endl;
    cout<<"Student Name : "<<name<<endl<<endl;
    cout<<"Branch : "<<branch<<endl<<endl;
    cout<<"Semester : "<<semester<<endl<<endl;
    cout<<"Total Marks : "<<totalmarks<<endl<<endl;
    cout<<"Percentage : "<<percentage<<endl<<endl;
    cout<<"Grade : "<<grade<<endl<<endl;
    cout<<"Result : "<<result<<endl<<endl;
    cout<<"--------------------------------------------\n"<<
          "Program Executed Successfully Using User-defined Functions."<<endl<<
          "--------------------------------------------";
}



int main()
{
    char enrollment_no[10],name[15],branch[10];
    int semester;
    int marks[5];

    int totalmarks;
    float percentage;
    char grade[17],result[16];

    displayHeader();

    acceptStudentdetails(enrollment_no,name,branch,
                         semester,marks);

    calculateAcademicResult(marks, totalmarks,percentage,grade,result);

    acceptStudentdetails(enrollment_no,name,branch,
                         semester,totalmarks,percentage,grade,result);

}
