#include<iostream>
using namespace std;

//   Single Inheritance

class Parent {
   
    public:
        void show(){
            cout<<"This is a Parent Class!"<<endl;
        }
            
};

class Child : public Parent {
    public: 
        void display(){
            cout<<"This is a Child Class!"<<endl;
        }
};
     

int main() {
    
    Child c;
    c.show();
    c.display();
    return 0;
}
