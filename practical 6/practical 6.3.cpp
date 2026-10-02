#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    short int n,i,j,score[50],m,y,ch;
    char id[50][10],name[50][20],grade[50][5],x[10];
    cout<<"*********************************************************************************"<<endl<<
        "               STUDENT RECORD MANAGEMENT SYSTEM              "<<endl<<
        "*********************************************************************************"<<endl<<endl<<endl;


  M:cout<<"1.enter student record  \n2.current record  status \n3.insert new record \n4.update student record \n5.delete student record \n6.final record \n7.exit"<<endl;
    cout<<"Enter Your Choice";
    cin>>ch;
    switch(ch)
    {

        case 1:
        //enter student record
        cout<<"enter number of students:";
        cin>>n;
        cout<<"enter students detail"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<"enter participant id:";
            cin>>id[i];
            cout<<"enter participant name:";
            cin>>name[i];
            cout<<"enter percentage:";
            cin>>score[i];
            if (score[i]>100||score[i]<0)
            {
                cout<<"invalid input";
                goto M;
            }
            else
            {
                if(score[i]>=40)
                {
                    if(score[i]>=90)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"O"<<endl;
                    }
                    else if(score[i]<90||score[i]>=80)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"A+"<<endl;
                    }
                    else if(score[i]<80||score[i]>=70)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"A"<<endl;

                    }
                    else if(score[i]<70||score[i]>=60)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"B"<<endl;
                    }
                    else if(score[i]<60||score[i]>=50)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"B="<<endl;

                    }
                    else if(score[i]<50||score[i]>=40)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"C"<<endl;
                    }
                }

                else
                {
                    cout<<"grade"<<setw(10)<<":"<<"F"<<endl;
                }
            }
            cout<<"------------------------------------------"<<endl;
        }
        goto M;


        case 2:
            //current record status
            cout<<"      current students records            "<<endl;
            for(i=0; i<n; i++)
            {
                cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;

            }
            cout<<"------------------------------------------"<<endl;
            goto M;
        case 3:

            //insert new student detail
            cout<<"    insert new student                    "<<endl;
            cout<<"enter position:";
            cin>>m;
            m=m-1;

            for(i=n; i>m; i--)
            {
                strcpy(id[i],id[i-1]);
                strcpy(name[i],name[i-1]);
                score[i]=score[i-1];
                strcpy(grade[i],grade[i-1]);
            }

            cout<<"enter new student detail"<<endl;

            cout<<"enter participant id:";
            cin>>id[m];
            cout<<"enter participant name:";
            cin>>name[m];
            cout<<"enter percentage:";
            cin>>score[m];
            if (score[i]>100||score[i]<0)
            {
                cout<<"invalid input";
                goto M;
            }
            else
            {
                if(score[m]>=40)
                {
                    if(score[m]>=90)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"O"<<endl;
                    }
                    else if(score[m]<90||score[m]>=80)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"A+"<<endl;
                    }
                    else if(score[m]<80||score[m]>=70)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"A"<<endl;
                    }
                    else if(score[m]<70||score[m]>=60)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"B+"<<endl;
                    }
                    else if(score[m]<60||score[m]>=50)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"B"<<endl;
                    }
                    else if(score[m]<50||score[m]>=40)
                    {
                        cout<<"grade"<<setw(10)<<":"<<"C"<<endl;
                    }
                }

                else
                {
                    cout<<"grade"<<setw(10)<<":"<<"F"<<endl;
                }
            }
            cout<<"------------------------------------------"<<endl;


            n=n+1;

            cout<<endl;
            cout<<"record inserted successfully"<<endl;
            cout<<"------------------------------------------"<<endl<<endl;
            cout<<"    Updated Student Record                 "<<endl;
            for(i=0; i<n; i++)
            {
                cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;
            }
            goto M;

        case 4:
            //update student record
            cout<<"    Update Student Record                 "<<endl;
            cout<<"enter participant id:";
            cin>>x;
            for(i=0; i<n; i++)
            {
                if(strcmp(id[i],x)==0)
                {
                    cout<<"enter participant name:";
                    cin>>name[i];
                    cout<<"enter percentage:";
                    cin>>score[i];
                    if (score[i]>100||score[i]<0)
                    {
                        cout<<"invalid input";
                        goto M;
                    }
                    else
                    {
                        if(score[i]>=40)
                        {
                            if(score[i]>=90)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"O"<<endl;
                            }
                            else if(score[i]<90||score[i]>=80)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"A+"<<endl;
                            }
                            else if(score[i]<80||score[i]>=70)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"A"<<endl;

                            }
                            else if(score[i]<70||score[i]>=60)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"B"<<endl;
                            }
                            else if(score[i]<60||score[i]>=50)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"B="<<endl;
                            }
                            else if(score[i]<50||score[i]>=40)
                            {
                                cout<<"grade"<<setw(10)<<":"<<"C"<<endl;
                            }
                        }

                        else
                        {
                            cout<<"grade"<<setw(10)<<":"<<"F"<<endl;
                        }
                    }
                    cout<<"------------------------------------------"<<endl;

                }

            }
            goto M;
        case 5:
            //delete student record
            cout<<"delete student record"<<endl;
            cout<<"enter student position"<<endl;
            cin>>y;
            y=y-1;
            for(i=y; i<n-1; i++)
            {
                strcpy(id[i],id[i+1]);
                strcpy(name[i],name[i+1]);
                score[i]=score[i+1];
                strcpy(grade[i],grade[i+1]);
            }
            n=n-1;
            cout<<"    record deleted successfully                  "<<endl;
            cout<<"-------------------------------------------------"<<endl<<endl;
            cout<<"         final student list                      "<<endl;
            goto M;
        case 6:
            for(i=0; i<n; i++)
            {
                cout<<setw(8)<<id[i]<<setw(5)<<name[i]<<setw(5)<<score[i]<<setw(5)<<grade[i]<<endl;
            }
            goto M;

        case 7:
            break;

        default:
            cout<<"invalid choice";
            goto M;
    }




}

