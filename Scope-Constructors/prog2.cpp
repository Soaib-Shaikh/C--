#include<iostream>
using namespace std;

// Default Constructor

class constructor{
    
    public: 
       constructor(){    
            cout<<"Constructor is Called!"<<endl;    
       } 

};

int main(){
    
    constructor ();
    return 0;
}