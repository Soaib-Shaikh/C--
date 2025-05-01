#include<iostream>
#include<vector>
using namespace std;

class Employee {
    private:
        vector<int> E_id;
        vector<string> E_names;
        vector<int> salary;

    public:
        void addEmployee(int id, string name, int B_salary)
        {
            E_id.push_back(id);
            E_names.push_back(name);
            salary.push_back(B_salary);
        }

        void removeEmployee(int index){
            if(index >= 0 && index < E_id.size()){
                E_id.erase(E_id.begin() + index);
                E_names.erase(E_names.begin() + index);
                salary.erase(salary.begin() + index);
            } else {
                cout << "Invalid Index!" << endl;
            }
        }

        void updateEmployee(int index, int id, string name, int B_salary){
            if(index >= 0 && index < E_id.size()){
                E_id[index] = id;
                E_names[index] = name;
                salary[index] = B_salary;
            } else {
                cout << "Invalid Index!" << endl;
            }
        }

        void viewEmployee(){
            for (int i = 0; i < E_id.size(); i++){
                cout << "E_id is: " << E_id[i] << endl;
                cout << "E_Name is: " << E_names[i] << endl;
                cout << "E_Salary is: " << salary[i] << endl;
                cout << "====================" << endl;
            }
        }
};

int main(){
    int choice, id, salary, index;
    string name;

    Employee e;

    do
    {
        cout << endl << endl;
        cout << "Enter 1 to Add Employee" << endl;
        cout << "Enter 2 to Remove Employee" << endl;
        cout << "Enter 3 to Update Employee" << endl;
        cout << "Enter 4 to View Employee" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Employee Name: ";
                cin >> name;
                cout << "Enter Employee Salary: ";
                cin >> salary;
                e.addEmployee(id, name, salary);
                break;

            case 2:
                cout << "Enter Index to Remove Employee: ";
                cin >> index;
                e.removeEmployee(index);
                break;

            case 3:
                cout << "Enter Index to Update Employee: ";
                cin >> index;
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Employee Name: ";
                cin >> name;
                cout << "Enter Employee Salary: ";
                cin >> salary;
                e.updateEmployee(index, id, name, salary);
                break;

            case 4:
                e.viewEmployee();
                break;

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    } while (choice != 0);
    

    return 0;
}

