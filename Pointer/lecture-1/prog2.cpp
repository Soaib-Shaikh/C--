#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p[5];
    

    for(int i=0;i<5;i++){
        p[i]= &a[i];
    }

    for(int i=0;i<5;i++){
        cout<<"a is: "<<&a[i]<<endl;
        cout<<"p is: "<<*p[i]<<endl;
    }
    return 0;
}