#include<iostream>
using namespace std;

// Class with Static Data Member

class Employee {
    public:
        static int count;
        Employee() {
            count++;
        }
};

    int Employee::count = 0;

int main() {
    Employee e1, e2, e3;
    cout << "Total Employees: " << Employee::count << endl;
    return 0;
}
