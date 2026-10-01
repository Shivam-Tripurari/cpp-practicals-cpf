#include<iostream>
using namespace std;
int main()
{
    int i,j,a[6],b[6],c[12],temp;
    cout<<"enter elements of first array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements of second array"<<endl;
    for(j=0;j<5;j++)
    {
        cin>>b[j];
    }
    //sorting array one
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //sorting array two
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    cout<<"sorted array one is :";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array two is :";
    for(j=0;j<5;j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        c[i+5]=b[i];
    }
    //sorting the merged array
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    cout<<"sorted array three is :";
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<" ";
    }



}

