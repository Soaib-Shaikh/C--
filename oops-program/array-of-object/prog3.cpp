#include<iostream>
using namespace std;

class Student{
    int rollno;
    string name;
    int marks;

    public:
        void setstudentdata(){
            cout<<"Enter Your Rollno: ";
            cin>>this ->rollno;
            cout<<"Enter Your Name: ";
            cin>>this ->name;
            cout<<"Enter Your Marks: ";
            cin>>this ->marks;
            cout<<endl;
        }

        void getstudentdata(){
            cout<<"Rollno is: "<<this->rollno<<endl;
            cout<<"Name is: "<<this->name<<endl;
            cout<<"Marks is: "<<this->marks<<endl;
            cout<<endl;
        }

};

int main(){

    Student s[5];

    for(int i=0;i<5;i++){
        cout<<"Student "<<i<<" Data"<<endl;
        s[i].setstudentdata();
    }

    for(int i=0;i<5;i++){
        cout<<"Student "<<i<<" Data"<<endl;
        s[i].getstudentdata();
    }


    return 0;
}