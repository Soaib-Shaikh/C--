#include<iostream>
using namespace std;

// Calculate Factorial

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
    
}

int main(){
    cout<<"Factorial: " <<fact(5)<<endl;

    return 0;
}