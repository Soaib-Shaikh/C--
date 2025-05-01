#include<iostream>
using namespace std;

// Public abstract class

class Student{
    public:
        int num=102;
    public:
        virtual void setStudent() = 0;
        void setNumber(){
            cout<<"Student number is: "<<num<<endl;
        }
        
};

class Marks : public Student{
    public:
        void setStudent(){
            cout<<"Number is: "<<num<<endl;
        }
};

int main(){

    Marks m;
    m.setNumber();
    m.setStudent();

    cout<<"Roll number is: "<<m.num<<endl;
    return 0;
}