#include<iostream>
using namespace std;

// Passing an Address

void func(int *ptr){
    cout<<*ptr;
}

int main(){
    int a=10;

    func(&a);
        
    return 0;
}


