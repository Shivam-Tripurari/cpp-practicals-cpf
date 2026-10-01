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
            cout<<j;
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"Name:Dakshraj Vaghela ; ID:26DCE114";
}
