#include<iostream>
using namespace std;

class Employee{
    int employeeid;
    string name;
    int salary;

    public:

        void setemployee(){
            cout<<"Enter employee id: ";
            cin>>this ->employeeid;
            cout<<"Enter employee name: ";
            cin>>this ->name;
            cout<<"Enter employee salary: ";
            cin>>this ->salary;
            cout<<endl;

        }

        void getemployee(){
            cout<<"Employee ID: "<<this ->employeeid<<endl;
            cout<<"Employee Name: "<<this ->name<<endl;
            cout<<"Employee Salary: "<<this ->salary<<endl;
            cout<<endl;
            
        }
};

int main(){
    Employee e[5];

    for(int i=0;i<5;i++){
        cout<<"Employee "<<i<<" Data"<<endl;
        e[i].setemployee();
    }
    

    for(int i=0;i<5;i++){
        cout<<"Employee "<<i<<" Data"<<endl;
        e[i].getemployee();
    }

    return 0;
}