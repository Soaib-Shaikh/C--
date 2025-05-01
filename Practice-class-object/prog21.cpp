#include<iostream>
using namespace std;

// Constructor with Default Arguments

class Test{
   
    public:
        int a,b;

    Test(int x=10, int y=2){
        a = x;
        b = y;
    }

    void display(){
        cout<<"A is: "<<a<<endl;
        cout<<"B is: "<<b<<endl;
    }
                         
};
   

int main() {

    Test t1;
    Test t2(2,10);

    t1.display();
    cout<<endl;
    t2.display();
   
    return 0;
}
