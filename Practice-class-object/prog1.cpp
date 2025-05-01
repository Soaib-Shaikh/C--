#include<iostream>
using namespace std;

// Basic Class and Object

class Student{
    public:
        void display(){
            cout<<"Hello, I am a Student!"<<endl;
        }
};

int main(){
    Student s;

    s.display();

    return 0;
}