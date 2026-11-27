#include<iostream>
#include<iomanip>
using namespace std;
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int fib(int N)
{
    if(N==0)
        return 0;
    if (N == 1)
        return 1;
    return fib(N - 1) + fib(N - 2);
}

int main()
{
    int n,N,f=1,fibo=0;
    int fibonacci;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Factorial using recursion : "<<factorial(n)<<endl;
    for(int i=n; i>=1; i--)
    {
        f=f*i;
    }
    cout<<"Factorial : "<<f<<endl;
    f=1;
    cout<<"\nEnter Steps : ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
    cout<<fib(i)<<" ";
    }
    cout<<endl;
    fibonacci=fibo+f;
    cout<<"Fibonacci series : ";
    for(int i=1; i<=N; i++)
    {
        cout<<fibo<<" ";
        fibo=f;
        f=fibonacci;
        fibonacci=fibo+f;
    }
    return 0;
}
