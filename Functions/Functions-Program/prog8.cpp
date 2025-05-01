#include<iostream>
using namespace std;

// Overloading Examples

int add(int a,int b){
    return a + b;
    
}
double add(double a, double b){
    return a + b;
}

int main(){
    cout<<add(10,2)<<endl;
    cout<<add(5.5, 2.5)<<endl;

    return 0;
}