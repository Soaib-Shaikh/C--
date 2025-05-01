#include<iostream>
using namespace std;

// Switch Cases 

int main()
{
    int a,b,*p,*q,choice;

    do {

    
        cout<<"Select an operation: "<<endl;
        cout<<"1. Addition "<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Divison"<<endl;
        cout<<"5. Modular"<<endl;
        cout<<"6. Press 0 for Exit Menu"<<endl;
        cout<<endl;
        
        cout<<"Enter value of a: ";
        cin>>a;
        cout<<"Enter value of b: ";
        cin>>b;

        p=&a;
        q=&b;

        

        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;

        switch (choice){
            case 1:
                cout<<"Addition of a and b is: "<<*p + *q<<endl;
                break;

            case 2: 
                cout<<"Subtraction of a and b is: "<<*p - *q<<endl;
                break;

            case 3:
                cout<<"multiplication of a and b is: "<<*p * *q<<endl;
                break;

            case 4:
                cout<<"Divison of a and b is: "<<*p / *q<<endl;
                break;

            case 5:
                cout<<"Modular of a and b is: "<<*p % *q<<endl;
                break;
            
            default: 
            cout<<"Invalid Choice !"<<endl;
        }
        cout<<endl;

    }while(choice != 0);

    return 0;
}