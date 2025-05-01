#include<iostream>
using namespace std;

// Dynamic Memory Allocation in Class

class Student{
   
    private:
       string* name;

    public:
    Student(string n){
        name = new string(n);
    }

    void display(){
        cout<<"Student Name: "<<*name<<endl;
    } 
    
    ~Student(){
        delete name;
    }
};
   

int main() {
    Student* s1 = new Student("Sam");
    s1->display();
    delete s1;
   
    return 0;
}
