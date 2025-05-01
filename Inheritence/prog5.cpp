#include<iostream>
using namespace std;

// Ambiguity Hybrid Inheritence

class A{
    public:
        void getmessageA(){
            cout<<"Hello from Class A"<<endl;
        }
};

class B : public A{
    public:
    void getmessageB(){
        cout<<"Hello from Class B"<<endl;
    }
};

class C : public A {
    public:
    void getmessageC(){
        cout<<"Hello from Class C"<<endl;
    }
};

class D : public B, public C {
    public:
    void getmessageD(){
        cout<<"Hello from Class D"<<endl;
    }
};

int main(){

    D d;

    d.B::getmessageA();
    d.C::getmessageA();
    d.getmessageB();
    d.getmessageC();
    d.getmessageD();
    return 0;
}