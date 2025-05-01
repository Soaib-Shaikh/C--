#include<iostream>
using namespace std;

// Factorial


int fact(int n){
    if(n <=1){
        return 1;
    }

    return n * fact(n-1);
}

int main(){
    int num;
    cout<<"Enter number of fact: ";
    cin>>num;


    cout<<"Fact of "<<num<<" is: "<<fact(num);


    return 0;
}