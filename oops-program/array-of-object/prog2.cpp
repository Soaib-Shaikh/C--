#include<iostream>
using namespace std;


class Student{
    int rollno;
    string name;
    int age;
    float percentage;

    public:
    
        void setstudent(){
            cout<<"Enter Rollno: ";
            cin>>this ->rollno;
            cout<<"Enter Name: ";
            cin>>this ->name;
            cout<<"Enter Age: ";
            cin>>this ->age;
            cout<<"Enter Percentage: ";
            cin>>this ->percentage;
            cout<<endl;
        }

        void getstudent(){
            cout<<"Rollno: "<<this ->rollno<<endl;
            cout<<"Name: "<<this ->name<<endl;
            cout<<"Age: "<<this ->age<<endl;
            cout<<"Percentage: "<<this ->percentage<<endl;
            cout<<endl;
        }

};

int main(){
    Student s[5];

    for(int i=0;i<3;i++){
        s[i].setstudent();
    }

    for(int i=0;i<3;i++){
        s[i].getstudent();
    }
    

    return 0;
}