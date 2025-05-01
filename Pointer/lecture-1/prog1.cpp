#include<iostream>
using namespace std;

int main()
{
    int a,*p;
    a=10;

    p = &a;

    cout<<"a is: "<<&a<<endl;
    cout<<"p is: "<<*p<<endl;

    return 0;
}