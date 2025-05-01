#include<iostream>
using namespace std;

// Default perameters

void display(int a=10,int b=20){
    cout<<"a: "<<a <<" b: "<<b<<endl;
}

int main(){
    display();
    display(15);
    display(30,40);

    return 0;
}