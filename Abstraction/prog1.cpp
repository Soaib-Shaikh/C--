#include<iostream>
using namespace std;

class Employee{
    public:
     virtual  void setEmployee() = 0;
     virtual void  setSalary() = 0;
    
};

class Manager : public Employee{
    public:
    void setEmployee(){
        cout<<"Employee name is: Sam"<<endl;
    }
};

class Salary : public Manager{
    public:
    void setSalary(){
        cout<<"Salary is: 100000"<<endl;
    }
};

int main(){
    Salary sal;

    sal.setEmployee();
    sal.setSalary();
    return 0;
}