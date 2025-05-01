#include<iostream>
using namespace std;

//  Constructor Overloading

class Person{
    public: 
        string name;
        int age;

    Person(){
        name = "Unknown";
        age = 0;
    }


    Person(string n, int a){
        name = n;
        age = a;

    }
    void display(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
   
};

int main(){
    Person p1;
    Person p2("Sam",25);

    p1.display();
    cout<<endl;
    p2.display();

    return 0;
}