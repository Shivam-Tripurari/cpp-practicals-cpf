#include <iostream>
using namespace std;

void ascending(int n)
{
    if(n == 0)
        return;

    ascending(n - 1);
    cout << n << " ";
}

void descending(int n)
{
    if(n == 0)
        return;

    cout << n << " ";
    descending(n - 1);
}

long long reverseNumber(long long n, long long rev = 0)
{
    if(n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return n % 10 + sumDigits(n / 10);
}

void binary(int n)
{
    if(n > 1)
        binary(n / 2);

    cout << n % 2;
}

int main()
{
    int n, num, decimal;

    cout << "RECURSIVE UTILITY ANALYZER\n";

    cout << "\nEnter a positive integer N: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Enter a positive number.";
        return 0;
    }

    cout << "\nNumbers from 1 to N: ";
    ascending(n);

    cout << "\nNumbers from N to 1: ";
    descending(n);

    cout << "\n\nEnter a number to reverse: ";
    cin >> num;

    cout << "Reversed Number: " << reverseNumber(num);

    cout << "\nSum of Digits: " << sumDigits(num);

    cout << "\n\nEnter a decimal number: ";
    cin >> decimal;

    if(decimal < 0)
    {
        cout << "Enter a non-negative number.";
        return 0;
    }

    cout << "Binary Number: ";
    binary(decimal);

    cout << "\n\nProgram Executed Successfully.";

    return 0;
}
