#include<iostream>
using namespace std;

// Call by Value

void func(int num){
    num = num + 10;
}

int main(){
    int a=10;

    cout<<"Before, a is: "<<a<<endl;
    func(a);
    cout<<"After, a is: "<<a<<endl;
        
    return 0;
}


