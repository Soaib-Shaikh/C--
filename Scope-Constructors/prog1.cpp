#include<iostream>
using namespace std;

// Local and Global Scope

int globalvar = 10;

void scope(){
    int localvar = 20;
    cout<<"Global Variable is: "<<globalvar<<endl;
    cout<<"Local Variable is: "<<localvar<<endl;
}

int main(){
    scope();

    return 0;
}