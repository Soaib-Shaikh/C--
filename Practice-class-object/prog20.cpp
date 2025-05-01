#include<iostream>
using namespace std;

// Virtual Function (Runtime Polymorphism)

class Base{
   
    public:
        virtual void show(){
            cout<<"Base Class Function"<<endl;
        }                  
};

class Derived : public Base {
    public: 
        void show() override{
            cout<<"Derived Class Function"<<endl;
        }
};
     

int main() {
   
    Base* b;
    Derived d;

    b = &d;
    b->show();
    return 0;
}
