#include<iostream>
#include<vector>
using namespace std;

class Students{

    private:
        vector<int> rollnumbers;
        vector<string> names;
        vector<int> marks;

    public:
        void addStudent(){
            int rollno;
            string name;
            int mark;
            int numStudent;;
            cout<<"Enter Number of Students: ";
            cin>>numStudent;
            for(int i = 0; i < numStudent; i++){
                cout<<"Enter Roll No: ";
                cin>>rollno;
                rollnumbers.push_back(rollno);
                cout<<"Enter Name: ";
                cin>>name;
                names.push_back(name);
                cout<<"Enter Marks: ";
                cin>>mark;
                marks.push_back(mark);
                cout<<endl;
            }

        }

        void deleteStudent(int index){
            if(index >=0 && index < rollnumbers.size()){
                rollnumbers.erase(rollnumbers.begin() + index);
                names.erase(names.begin() + index);
                marks.erase(marks.begin() + index);
            } else {
                cout<<"Invalid Index!"<<endl;
            }
        }

        void updateStudent(int rollno, string name, int newMarks, int index){
            if(index >=0 && index < rollnumbers.size()){
                rollnumbers[index] = rollno;
                names[index] = name;
                marks[index] = newMarks;
            } else {
                cout<<"Invalid Index!"<<endl;
            }
        }

        void viewStudents(){
            for(int i = 0; i < rollnumbers.size(); i++){
                cout<<"Roll No: "<<rollnumbers[i]<<endl;
                cout<<"Name: "<<names[i]<<endl;
                cout<<"Marks: "<<marks[i]<<endl;
                cout<<"-----------------"<<endl;
            }
        }
};

int main(){
    int choice,rollno,marks,index;
    string name;

    Students z;

    do
    {
        cout<<endl<<endl;
        cout<<"Enter 1 to Add Student"<<endl;
        cout<<"Enter 2 to Remove Student"<<endl;
        cout<<"Enter 3 to Update Student"<<endl;
        cout<<"Enter 4 to View Students"<<endl;
        cout<<"Enter 0 to Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
        case 1:
            z.addStudent();
            break;
        
        case 2:
            cout<<"Enter Index: ";
            cin>>index;
            z.deleteStudent(index);
            break;
        

        case 3:
            cout<<"Enter Index: ";
            cin>>index;
            cout<<"Enter Roll No: ";
            cin>>rollno;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Marks: ";
            cin>>marks;
            z.updateStudent(rollno,name,marks,index);
            break;
        
        case 4:
            z.viewStudents();
            break;

        case 0:
            cout<<"Exiting..."<<endl;
            break;

        default:
            cout<<"Invalid Choice!"<<endl;
            break;
        }
        
    } while (choice != 0);
    


    return 0;
}