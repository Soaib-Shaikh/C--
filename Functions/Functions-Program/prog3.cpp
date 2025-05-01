#include<iostream>
using namespace std;

// Find max numbers

int maxnum(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    cout<<"Max of two number is: "<<maxnum(10,2);

    return 0;
}