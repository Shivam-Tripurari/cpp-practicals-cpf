#include<iostream>
#include<fstream>
using namespace std;
int a=10;
int main()
{
    int b=20;
    int *p,**q;
    p=new int;
    *p=30;
    cout<<"********************************+***************************************"<<endl;
    cout<<"Program Execution&amp;Error Handling Analyzer"<<endl;
    cout<<"********************************+***************************************"<<endl;
    cout<<"Global variable value       :"<<a<<endl;
    cout<<"Local variable value        :"<<b<<endl;
    cout<<"Dynamically allocated value :"<<*p<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Low-level Error Demonstration Arithmetic Overflow Observed"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    q=&p;
    **q=70;
    cout<<"Pointer Aliasing"<<endl;
    cout<<"original value   :"<<*p<<endl;
    cout<<"Updated value    :"<<**q<<endl;
    cout<<"Both Variables Refer to the same memory location"<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"Memory leak demonstration"<<endl;
    cout<<"Dynamic Memory Allocated"<<endl;
    cout<<"Memory Released successfully"<<endl;
    int r,s;
    cout<<"Arithmetic Operation"<<endl;
    cout<<"Enter Divisor    :";
    cin>>r;
    cout<<"Enter Dividend   :";
    cin>>s;
    if(s==0)
    {
        cout<<"Error:Division by zero is not possible"<<endl;
    }
     cout<<"-------------------------------------------------------------------------"<<endl;
     cout<<"File operation"<<endl;
     ifstream f;
     f.open("about.txt");
      if(!f)
     {
         cout<<"Unable to open file"<<endl;
     }
     cout<<"-------------------------------------------------------------------------"<<endl;
     cout<<"Program executed successfully"<<endl;
     cout<<"-------------------------------------------------------------------------"<<endl;
}
