#include<iostream>
using namespace std;

// Swap Two number (Call by Reference)

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;

    
}

int main(){
    int x=5,y=10;
    swap(x, y);

    cout<<"Swapped value: x="<<x <<" y="<<y<<endl;

    return 0;
}