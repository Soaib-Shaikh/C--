#include<iostream>
using namespace std;

template <typename T1, typename T2>

class MyClass{

    T1 num1;
    T2 num2;

    public:
    void setdata(int a, double b){
        this->num1 = a;
        this->num2 = b;
    }

    void getdata(){
        cout<<"Value of num1 is: "<<num1<<endl;
        cout<<"Value of num2 is: "<<num2<<endl;
    }

};

int main(){

    MyClass <int, double> obj1;

    obj1.setdata(10,2.102);
    obj1.getdata();
    return 0;
}