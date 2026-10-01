#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char id[50][10],name[50][20];
    int score[50];
    short int t=0,i;
    float avg;
    int max,min;
    cout<<"****************************************************************************"<<endl<<
    "              SPORTS EVENT SCORE ANALYSIS                    "<<endl<<
    "******************************************************************************"<<endl<<endl;

    cout<<"enter number of participants:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter participant id:";
        cin>>id[i];
        cin.ignore();
        cout<<"enter participant name:";
        cin.getline(name[i],20);
        cout<<"enter score:";
        cin>>score[i];
        cout<<endl;
    }

    cout<<"--------------------------------------------------------------------------"<<endl<<
    "                Participant Performance                    "<<endl<<
    "----------------------------------------------------------------------------"<<endl;


    cout<<"  ID   Name   Score    "<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(2)<<id[i]<<setw(4)<<name[i]<<setw(4)<<score[i]<<endl;
        t=t+score[i];
    }
    cout<<"---------------------------------------------------------------------------"<<endl;
    avg=t/float(n);
    cout<<"total score:"<<t<<endl;
    cout<<"average:"<<avg<<endl;
    max=score[0];
    min=score[0];
    for(i=1;i<n;i++)
    {
        if(score[i]>max)
        {
            max=score[i];
        }
    }

    for(int i=1;i<n;i++)
    {
        if(score[i]<max)
        {
            min=score[i];
        }

    }


    cout<<"maximum number:"<<max<<endl;
    cout<<"minimum number:"<<min<<endl;
    cout<<endl;

    cout<<"Name:Dakshraj Vaghela ; ID:26DCE114";

}

