#include<iostream>
using namespace std;

struct ProductA
{
    char a;
    double b;
    float c;
    char d;
    int e;
};
struct ProductB
{
    int f;
    float g;
    double h;
    char i;
    char j;
};
union ProductC
{
    int k;
    float l;
    char m;
};

int main()
{
    ProductA k;
    ProductB l;
    ProductC m;
    cout<<"********************************************"<<endl;
    cout<<" COMPOSITE DATA REPRESENTATION ANALYZER "<<endl;
    cout<<"********************************************"<<endl;

    cout<<"Composite Datatype A"<<endl;

    cout<<"Size :"<<sizeof(k.a)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(k.b)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(k.c)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(k.d)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(k.e)<<" Bytes"<<endl;

    cout<<"Total Size :"<<sizeof(ProductA)<<" Bytes"<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"Composite Datatype B"<<endl;

    cout<<"Size :"<<sizeof(l.f)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(l.g)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(l.h)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(l.i)<<" Bytes"<<endl;
    cout<<"Size :"<<sizeof(l.j)<<" Bytes"<<endl;

    cout<<"Total Size :"<<sizeof(ProductB)<<" Bytes"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<endl;
    cout<<"Shared Memory Representation"<<endl;
    cout<<endl;
    cout<<"\nInteger Value : ";
    m.k=20;
    cout<<m.k<<endl;
    cout<<m.l<<endl;
    cout<<m.m<<endl;
    cout<<"\nFloating Value : ";
    m.l=120.00;
    cout<<m.l<<endl;
    cout<<m.k<<endl;
    cout<<m.m<<endl;
    cout<<"\nCharacter Value : ";
    m.m='x';
    cout<<m.m<<endl;
    cout<<m.k<<endl;
    cout<<m.l<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<endl;
    cout<<"Trade-off Analysis"<<endl;
    cout<<"Total Size of union : "<<sizeof(ProductC)<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"\tProgram Executed Successfully"<<endl;
    cout<<"--------------------------------------------"<<endl;
    return 0;
}
