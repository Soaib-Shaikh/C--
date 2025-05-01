#include<iostream>
using namespace std;

// Function with Dynamic Memory Allocation

int *allocatememory(){
    int *ptr = new int(50);
    return ptr;
}

int main(){
    int *p = allocatememory();
    cout<<"Dynamically Allocated value: "<<*p<<endl;
    delete p;
        
    return 0;
}


