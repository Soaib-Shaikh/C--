#include<iostream>
using namespace std;

// Addition

class sum{

    public:
    int a,b;

    void setvalue(int x,int y){
        a=x;
        b=y;
    }

    void getvalue(){
        cout<<"a is: "<<a<<endl;
        cout<<"b is: "<<b<<endl;
        cout<<"Sum of two value: "<< a + b <<endl;
    }
   
};

int main(){
    sum s;
    
    s.setvalue(10,2);
    s.getvalue();

    return 0;
}