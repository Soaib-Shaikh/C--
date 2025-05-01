#include<iostream>
using namespace std;

// Check Odd or Even Num

int checkEvenOdd(int num){
    if (num & 2 == 0){
        cout<<num<<" is Even"<<endl;
    }else{
        cout<<num<<" is Odd"<<endl;
    }
}

int main(){
    checkEvenOdd(7);

    return 0;
}