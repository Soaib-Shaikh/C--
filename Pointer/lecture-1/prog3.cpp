#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p,**q;
    
    p = &a;

    q = &p;

    cout<<"a is: "<<&a<<endl;
    cout<<"p is: "<<*p<<endl;
    cout<<"q is: "<<**q<<endl;
    return 0;
}