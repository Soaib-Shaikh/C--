#include<iostream>
using namespace std;

// Function Pointer Example

void display(){
    cout<<"Hello from Function Pointer!"<<endl;
}

int main(){
    void(*funcptr)() = display;
    funcptr();
        
    return 0;
}


