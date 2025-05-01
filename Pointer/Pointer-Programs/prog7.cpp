#include<iostream>
using namespace std;

// Function using Pointer

void updatevalue(int *ptr){
    *ptr = *ptr + 10;
}

int main(){
    
    int a=10;
    updatevalue(&a);

    cout<<"Updated Value: "<<a<<endl;
        
    return 0;
}


