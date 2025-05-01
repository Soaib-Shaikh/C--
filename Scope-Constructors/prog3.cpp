#include<iostream>
using namespace std;

// Perameterised Constructor

class student{
    string name;
    int age;

    public:
        student(string n, int a) {
            name = n;
            age = a;
        } 

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
    
};

int main(){
    student s("Sam",25);
    s.display();
    
    return 0;
}