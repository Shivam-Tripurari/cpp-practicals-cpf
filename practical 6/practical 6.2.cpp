#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char id[50][20],name[50][20],m[20],l[20];
    int score[50],i,j,temp;

    cout<<"****************************************************************************"<<endl<<
        "              SPORTS EVENT SCORE ANALYSIS                    "<<endl<<
        "******************************************************************************"<<endl<<endl;

    cout<<"enter number of participants:";
    cin>>n;
    for(i=0; i<n; i++)
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

    cout<<"search student"<<endl;

    cout<<"Enter student id"<<endl;
    cin>>m;

    for(i=0;i<n;i++)
    {
        if(strcmp(id[i],m)==0)
        {   cout<<"-------------------------------------"<<endl;
            cout<<"          participant found          "<<endl;
            cout<<"-------------------------------------"<<endl;
            cout<<"     ID    :"<<id[i]<<endl;
            cout<<"    NAME   :"<<name[i]<<endl;
            cout<<"   SCORE   :"<<score[i]<<endl;
        }
    }

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(score[i] < score[j])
                {
                    strcpy(l,name[i]);
                    temp=score[i];
                    strcpy(name[i],name[j]);
                    score[i]=score[j];
                    strcpy(name[j],l);
                    score[j]=temp;
                }
            }
            cout << "--------------------------------" << endl;
            cout << "          Ranking List          " << endl;
            cout << "--------------------------------" << endl;

            cout <<"Rank"<<"  "<<"Name"<<"  "<<"Score"<<endl;

            for(i = 0; i < n; i++)
            {
                cout <<i+1<<"  "<<name[i]<<"  "<<score[i]<<endl;
            }
            cout<<"top three performance"<<endl;
            for(i=0; i<3; i++)
            {
                cout<<i+1<<" "<<name[i]<<" "<<score[i]<<endl;
            }
        }

}
