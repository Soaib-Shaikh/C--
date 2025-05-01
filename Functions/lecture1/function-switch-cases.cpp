#include<iostream>
using namespace std;

// UDF

// Addition
int add(int a, int b){
    return a+b;
}

// Subtraction
int sub(int a, int b){
    return a-b;
}

// Multiplication
int multi(int a, int b){
    return a*b;
}

// Division
int divide(int a, int b){
    if( b != 0){
        return a / b;
    }else{
        cout<<"Error !";
        return 0;
    }
}

int modu(int a, int b){
    if(b != 0){
        return a % b;
    }else{
        cout<<"Error !";
        return 0;
    }
}

int main(){

    int a,b,choice;

    cout<<"Select an Operation: "<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Modular "<<endl;

    cout<<endl;
    cout<<"Enter Your choice (1-5): ";
    cin>>choice;

    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    switch (choice){
    
        case 1: 
            cout<<"Addition of a and b is: "<<add(a,b)<<endl;
            break;
        case 2:
            cout<<"Subtraction of a and b is: "<<sub(a,b)<<endl;
            break;
        case 3:
            cout<<"Multiplication of a and b is: "<<multi(a,b)<<endl;
            break;
        case 4:
            cout<<"Division of a and b is: "<<divide(a,b)<<endl;
            break;
        case 5:
            cout<<"Modular of a and b is: "<<modu(a,b)<<endl;
            break;
        default:
            cout<<"Invalid Choice !"<<endl;

    }
    return 0;
}