#include<iostream>
using namespace std;

class Employee{
    public:
        int E_id;
        string E_name;
        int DA,HRA,TA,PF,PT;

    public:
        void setEmployee(){
            cout<<"Enter E_id: ";
            cin>>E_id;
            cout<<"Enter E_name: ";
            cin>>E_name;
            cout<<"Enter DA: ";
            cin>>DA;
            cout<<"Enter HRA: ";
            cin>>HRA;
            cout<<"Enter TA: ";
            cin>>TA;
            cout<<"Enter PF: ";
            cin>>PF;
            cout<<"Enter PT: ";
            cin>>PT;
        }

        void getEmployee(){
            cout<<"E_id is: "<<E_id<<endl;
            cout<<"E_name is: "<<E_name<<endl;
            cout<<"DA is: "<<DA<<endl;
            cout<<"HRA is: "<<HRA<<endl;
            cout<<"TA is: "<<TA<<endl;
            cout<<"PF is: "<<PF<<endl;
            cout<<"PT is: "<<PT<<endl;
        }
};

class Salary : public Employee{
    public: 
        int B_Salary,Gross_Salary,Net_Salary;
        
        void setSalary(){
            setEmployee();
            cout<<"Basic Salary: ";
            cin>>B_Salary;           
            Gross_Salary = DA + HRA + TA - PF - PT;
            Net_Salary = B_Salary + Gross_Salary;
            cout<<endl;

        }

        void getSalary(){
            getEmployee();
            cout<<"Basic Salary is: "<<B_Salary<<endl;;
            cout<<"Gross Salary is: "<<Gross_Salary<<endl;
            cout<<"Net Salary is: "<<Net_Salary<<endl;
            
        }
};

int main(){


    Salary s;
    s.setSalary();
    s.getSalary();

    return 0;
}