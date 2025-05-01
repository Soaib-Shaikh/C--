#include<iostream>
using namespace std;

// Multilevel Inheritence

class Grandparent{
    public:
        void showGrandparent(){
            cout<<"Grandparent Class"<<endl;
        }
};

class Parent : public Grandparent{
    public:
        void showParent(){
            cout<<"Parent Class"<<endl;
        }
};

class Child : public Parent{
    public:
        void showChild(){
            cout<<"Child Class"<<endl;
        }
};

int main(){
    Child c;

    c.showGrandparent();
    c.showParent();
    c.showChild();
    
    return 0;
}