#include<iostream>
using namespace std;

//  This Pointer Usage

class Example {
    
    public:
        int a;

    void setA(int a){
        this->a = a;
    }

    void display(){
        cout<<"Value: "<<a<<endl;
    }
        
};
     

int main() {

    Example e;
    e.setA(102);
    e.display();
    
    return 0;
}
