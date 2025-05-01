#include<iostream>
using namespace std;

// Function Template Example
template <typename T>

T square(T num){
    return num * num;
}

int main(){
    cout<<"Square is: "<<square(10)<<endl;
    cout<<"Square is: "<<square(10.2)<<endl;
        
    return 0;
}


