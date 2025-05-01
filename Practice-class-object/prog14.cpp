#include<iostream>
using namespace std;

//  Friend Class

class B;

class A {
    private: 
        int numA;

    public:
        A() : numA(10) {}
        friend class B;
            
};
     
class B{
    public:
    void showA(A obj){
        cout<<"Value of numA: "<<obj.numA<<endl;
    }
};

int main() {
    A a;
    B b;
    b.showA(a);

    
    return 0;
}
