#include<iostream>
using namespace std;

// Passing an Array

void func(int n[]){
    cout<<"n[0] is: "<<n[0]<<endl;
    cout<<"n[1] is: "<<n[1]<<endl;
    cout<<"n[2] is: "<<n[2]<<endl;
    cout<<"n[3] is: "<<n[3]<<endl;
    cout<<"n[4] is: "<<n[4]<<endl;
}

int main(){
    int a[] = {1,2,3,4,5};
    func(a);
        
    return 0;
}


