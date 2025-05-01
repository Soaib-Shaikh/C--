#include<iostream>
using namespace std;

// Passing a Pointer

void func(int *ptr){
    cout<<"p is: "<<*ptr;
}

int main(){
    int a=10;
    int *p;

    p=&a;
    func(p);
        
    return 0;
}


