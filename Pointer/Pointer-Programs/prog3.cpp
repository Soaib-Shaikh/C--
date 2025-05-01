#include<iostream>
using namespace std;

// Multiplication of Elements (with pointer)

int main()
{
    int a,b,*p,*q;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    p=&a;
    q=&b;

    cout<<"Multiply of a and b is: "<<*p * *q;

    return 0;
}