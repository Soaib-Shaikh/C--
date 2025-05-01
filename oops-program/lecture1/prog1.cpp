#include<iostream>
using namespace std;

class sum{

    public:
    int num1,num2;

    void setaddition(){
        cout<<"num1 is: ";
        cin>>num1;
        cout<<"num2 is: ";
        cin>>num2;
        
        
    }

    void getaddition(){
        cout<<"Sum of two numbers: "<<num1+num2<<endl;
    }
};

int main(){
    sum s;
    s.setaddition();
    s.getaddition();

    return 0;
}