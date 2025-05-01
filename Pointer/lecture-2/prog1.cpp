#include<iostream>
using namespace std;

// Refrence Variable

int main(){

    int a=10;
    int &ref = a;

    cout<<"A is: "<<a<<endl;
    cout<<"Ref is: "<<ref<<endl;
    cout<<endl;

    ref=102;

    cout<<"A is: "<<a<<endl;
    cout<<"Ref is: "<<ref<<endl;
        
    return 0;
}