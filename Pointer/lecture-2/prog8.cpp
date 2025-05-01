#include<iostream>
using namespace std;

// Call by Const Reference

void func(const int &n){
    n = n + 10;
}

int main(){
    int a=10;

    cout<<"Before, a is: "<<a<<endl;
    func(a);
    cout<<"After, a is: "<<a<<endl;
        
    return 0;
}


