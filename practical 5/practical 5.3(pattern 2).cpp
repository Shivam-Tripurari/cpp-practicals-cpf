#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter Number For Pattern:";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            cout<<char(j+96);
        }
        cout<<endl;
    }
    cout<<"Name:Dakshraj Vaghela ; ID:26DCE114";
}

