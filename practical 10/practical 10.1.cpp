#include<iostream>
using namespace std;
struct contact
{
    int mob;
    char email[35];
};

struct Employee
{
    char enrollment_no[30];
    char stuname[30];
    char branch[20];
    int sem;
    float perc;
    char grade[2];
    contact con;


};

int main()
{
    int n,i;
    cout<<"********************************************"<<endl<<
        "       STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
        "********************************************"<<endl;

M:
    cout<<"Enter number of students:";
    cin>>n;
    cout<<"-----------------------------------------"<<endl;

    Employee e[n];
    for(i=0; i<n; i++)
    {
        cout<<"enrollment no:";
        cin.ignore();
        cin.getline(e[i].enrollment_no,30);
        cout<<"Student name:";
        cin.ignore();
        cin.getline(e[i].stuname,30);
        cout<<"branch:";
        cin.ignore();
        cin.getline(e[i].grade,20);
        cout<<"semester:";
        cin>>e[i].sem;

        cout<<"percentage:";
        cin>>e[i].perc;

        if (e[i].perc > 100 || e[i].perc < 0)
        {
            cout << "invalid input";
            goto M;
        }
        else
        {
            if (e[i].perc >= 40)
            {
                if (e[i].perc >= 90)
                {
                    cout << "grade" << ":" << "O+" << endl;
                }
                else if (e[i].perc < 90 && e[i].perc >= 80)
                {
                    cout << "grade" << ":" << "A+" << endl;
                }
                else if (e[i].perc < 80 && e[i].perc >= 70)
                {
                    cout << "grade" << ":" << "A" << endl;
                }
                else if (e[i].perc < 70 && e[i].perc >= 60)
                {
                    cout << "grade" << ":" << "B+" << endl;
                }
                else if (e[i].perc < 60 && e[i].perc >= 50)
                {
                    cout << "grade" << ":" << "B" << endl;
                }
                else if (e[i].perc < 50 && e[i].perc >= 40)
                {
                    cout << "grade" << ":" << "C" << endl;
                }
            }
            else
            {
                cout << "grade" << ":" << "F" << endl;
            }
        }


    }

}


