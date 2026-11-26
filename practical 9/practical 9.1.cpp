#include<iostream>
using namespace std;
int main()
{

    int n1;
    char c;
    float f;
    cout<<"***********************************************************"<<endl;
    cout<<"       MEMORY ADRESS EXPLORER"<<endl;
    cout<<"***********************************************************"<<endl;
    cout<<"----------------Variable information-----------------------"<<endl;
    //part-A address and value
    cout<<"integer value    :";
    cin>>n1;
    cout<<"Memory Address   :";
    cout<<&n1;
    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Character value   :";
    cin>>c;
    cout<<"Memory Address    :";
    cout<<static_cast<void*>(&c);
    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Floating value    :";
    cin>>f;
    cout<<"Memory address    :";
    cout<<&f<<endl;
    //part-B Indirect referencing
    int a=10;
    int *p;
    p=&a;
    cout<<"Stored value   :"<<a<<endl;
    *p=30;
    cout<<"Modified value  :"<<a<<endl;
    cout<<"\n --------------------------------------------------------"<<endl;
    //part-c sequential data collection
    int b[5]={10,20,30,40,50};
    int *q,i;
    cout<<"Array using index"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<" ";

    }
    q=b;
    cout<<endl;
    cout<<"Array using address based access"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(q+i)<<" ";
    }
    cout<<"\n --------------------------------------------------------"<<endl;
    cout<<"Observation"<<endl;
    cout<<"Both approaches access the same memory location";
}

