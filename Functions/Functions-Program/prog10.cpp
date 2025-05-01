#include<iostream>
using namespace std;

// Check Prime Number

bool isPrime(int n){
    if( n <= 1) return false;

    for(int i=2; i * i <= n;i++){
        if (n & i == 0) return false;
    }

    return true;
}

int main(){
    
    cout<<(isPrime(29) ? "Prime" : "Not Prime")<<endl;

    return 0;
}