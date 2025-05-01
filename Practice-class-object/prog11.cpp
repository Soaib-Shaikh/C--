#include<iostream>
using namespace std;

// Array of Objects

class Student {
    
    public:
        string name;
        int marks;

    void setstudent(string n,int m){
        name = n;
        marks = m;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
     

int main() {

    Student s[3];

    s[0].setstudent("Soaib",90);
    s[1].setstudent("Zeb",96);
    s[2].setstudent("Sam",80);

    for(int i=0;i<3;i++){
        s[i].display();
    }
    
    return 0;
}
