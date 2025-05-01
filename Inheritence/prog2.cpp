#include<iostream>
using namespace std;

// Multiple Inheritence

class A {
    public:
        void showA(){
            cout<<"Class A"<<endl;
        }
};

class B {
    public: 
        void showB(){
            cout<<"Class B"<<endl;
        }
};

class C : public A , public B{
    public: 
        void showC(){
            cout<<"Class C"<<endl;
        }
};

int main(){

    C c;

    c.showA();
    c.showB();
    c.showC();

    return 0;
}