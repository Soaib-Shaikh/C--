#include<iostream>
using namespace std;

//  Global Scope

int globalvar = 10;

int main(){
    cout<<::globalvar;

    return 0;
}