#include<iostream>
using namespace std;

// Swap Two number (Call by Value)

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;

    cout<<"After swap: a="<<a <<" b="<<b<<endl;
}

int main(){
    int x=5,y=10;
    swap(x,y);

    cout<<"Original value: x="<<x <<" y="<<y<<endl;

    return 0;
}