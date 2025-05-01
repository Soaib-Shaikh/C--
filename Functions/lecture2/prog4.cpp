#include<iostream>
using namespace std;

// Nested Program

void sam(){
    cout<<"I Am Sam"<<endl;
}

void z(){
    cout<<"I Am Z"<<endl;
    sam();
}

int main(){
    z();

    return 0;
}