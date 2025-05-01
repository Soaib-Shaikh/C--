#include<iostream>
using namespace std;

// Marksheet with Single Inheritence

class Student{
    public: 
        int rollno,html,css,cpp;
        string name;
        

    void input(){
        cout<<"Enter Rollno: ";
        cin>>rollno;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter HTML mark: ";
        cin>>html;

        cout<<"Enter CSS mark: ";
        cin>>css;

        cout<<"Enter C++ mark: ";
        cin>>cpp;
        cout<<endl;
    }

    void display(){
        cout<<"/// OUTPUT ///"<<endl;
        cout<<endl;
        cout<<"Rollno is: "<<rollno<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"HTML Mark is: "<<html<<endl;
        cout<<"CSS Mark is: "<<css<<endl;
        cout<<"C++ Mark is: "<<cpp<<endl;
        cout<<endl;
    }

};

class Result : public Student{
    
    public:
        int total;
        float avg;

        void calculate(){
            total = html + css + cpp;
            avg = total / 3;
        }

        void displayresult(){

            display();
                cout<<"Total is: "<<total<<endl;
                cout<<"Average is: "<<avg<<endl;
         
                if (html >= 35 && css >= 35 && cpp >=35)
                {
                    cout<<"Pass"<<endl;

                    if (avg>=80){
                        cout<<"Grade A"<<endl;
                    }
                    else if(avg>=60)
                    {
                        cout<<"Grade B"<<endl;
                    }
                    else if(avg>=50)
                    {
                        cout<<"Grade C"<<endl;
                    }
                    else
                    {
                        cout<<"Pass Class"<<endl;
                    }
                } 
                else
                {
                    cout<<"Fail"<<endl;
                }       
        }      
};

int main() {
    Result student;

    student.input();
    student.calculate();
    student.displayresult();

    return 0;
}