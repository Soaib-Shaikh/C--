#include<iostream>
using namespace std;

// Passing a Value

void addition(int a, int b){
    cout<<"Addition of a and b is: "<<a+b;
    cout<<endl;
}

void subtraction(int a, int b){
    cout<<"Subtraction of a and b is: "<<a-b;
    cout<<endl;
}

void multiplication(int a, int b){
    cout<<"Multiplication of a and b is: "<<a*b;
    cout<<endl;
}

void divison(int a, int b){
    cout<<"Divison of a and b is: "<<a/b;
    cout<<endl;
}

void modular(int a, int b){
    cout<<"Modulo of a and b is: "<<a%b;
    cout<<endl;
}

int main(){

    addition(10,2);
    subtraction(10,2);
    multiplication(10,2);
    divison(10,2);
    modular(10,2);
        
    return 0;
}


