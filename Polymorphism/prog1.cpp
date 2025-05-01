#include<iostream>
using namespace std;

// Method Overloading

int add(int a, int b){
    cout<<"Addition of a and b is: "<<a + b<<endl;
}
double add(double a, double b){
    cout<<"Addition of a and b is: "<<a + b<<endl;
}

int main(){
    add(10,2);
    add(10.2,2.10);

    return 0;
}