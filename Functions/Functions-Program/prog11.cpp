#include<iostream>
using namespace std;

// Find min number

int minnum(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    cout<<"Min of two number is: "<<minnum(10,2);

    return 0;
}