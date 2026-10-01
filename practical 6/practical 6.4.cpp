#include<iostream>
using namespace std;
int main()
{
    short int i,j,m,z,x,y,a[5][5],b[5][5],c[5][5],n;
    cout<<"***********************************************************"<<endl<<
        "                  MATRIX MULTIPLICATION                    "<<endl<<
        "*************************************************************"<<endl<<endl;

  M:cout<<"enter the number of rows you want in matrix 1:";
    cin>>n;
    cout<<"enter the number of colums you want in matrix 1:";
    cin>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<"enter the value of "<<i<<" row and "<<j<<" column in first matrix:";
            cin>>a[i][j];
        }
    }
    cout<<"enter the number of rows you want in matrix 2:";
    cin>>y;
    cout<<"enter the number of column you want in matrix 2:";
    cin>>z;
    for(i=1; i<=y; i++)
    {
        for(j=1; j<=z; j++)
        {
            cout<<"enter the value of "<<i<<" row and "<<j<<" column in sec matrix:";
            cin>>b[i][j];
        }
    }
    if(m==y)
    {
        for(x=1; x<=3; x++)
        {
            for(i=1; i<=3; i++)
            {
                c[x][i]=0;
                for(j=1; j<=3; j++)
                {
                    c[x][i]=c[x][i]+(a[x][j]*b[j][i]);
                }
                cout<<c[x][i]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"number of columns in matrix 1 is not equal to number of rows in matrix 2"<<endl;
        goto M;
    }
}
