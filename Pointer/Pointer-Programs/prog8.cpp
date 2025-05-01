#include<iostream>
using namespace std;

// Function Returning Pointer

int *getpointer(){
    static int x=10;
    return &x;
}

int main(){
    int *ptr = getpointer();
    cout<<"Printer value: "<<*ptr<<endl;
        
    return 0;
}


