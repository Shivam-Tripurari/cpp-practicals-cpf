#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char en[8],sname[25],b[5],fn[15],ln[15],rfn[35],key[25];
    short int i,j,k;
    cout<<"*************************************************************"<<endl<<
    "        STUDENT RECORD MANAGEMENT SYSTEM               "<<endl<<
    "**************************************************************"<<endl;
    cout<<"enter enrollment number:";
    cin>>en;
    cout<<"enter student name:";
    cin.ignore();
    cin.getline(sname,25);
    cout<<"enter branch name:";
    cin>>b;
    cout<<"----------------------------------------------------------"<<endl;
    k=0;
    for(i=0;sname[i]!='\0';i++,k++)
    {
        rfn[k]=sname[i];
    }
    rfn[k]='-';
    k++;
    for(j=0;en[j]!='\0';j++,k++)
    {
        rfn[k]=en[j];
    }
    rfn[k]='\0';
    cout<<"      Student reference                           "<<endl;
    cout<<rfn<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"  student first name     "<<endl;
    for(i=0;sname[i]!=' ';i++)
    {
        fn[i]=sname[i];
    }
    fn[i]='\0';
    cout<<fn;
    i++;
    cout<<endl;
    cout<<"   student last name      "<<endl;
    for(j=0;sname[i]!='\0';i++,j++)
    {
        ln[j]=sname[i];
    }
    ln[j]='\0';
    cout<<ln<<endl;
    cout<<"----------------------------------------------------------"<<endl<<endl;
    cout<<"Enter keyword :";
    cin.ignore();
    cin.getline(key,25);
    for(i=0;key[i]!='\0';i++)
    {
        for(j=0;sname[j]!='\0';j++)
        {
            if(sname[j]==key[i])
            {
                cout<<"keyword found"<<endl;
                goto M;
            }
        }
    }
  M:cout<<" student report   "<<endl;
    cout<<"Enrollment Number   :"<<en<<endl<<"Student Name        :"<<sname<<endl<<"Branch              :"<<b;






}
