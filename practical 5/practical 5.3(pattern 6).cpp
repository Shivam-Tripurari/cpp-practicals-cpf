#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter Number For pattern:";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n-i;j=j+1)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j=j+1)
        {
            cout<<char(j+64);
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<char(j+64);
        }
        cout<<endl;
    }

    cout<<"Name:Dakshraj Vaghela ; ID:26DCE114";

}

