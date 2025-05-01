#include<iostream>
using namespace std;

class var{

    public:
    int a,b;

    void setvalue(int x,int y){
       this -> a=x;
       this -> b=y;
    }

    void getvalue(){
        cout<<"a is: "<<a<<endl;
        cout<<"b is: "<<b<<endl;
        
    }
   
};

int main(){
    var v;
    
    v.setvalue(10,20);
    v.getvalue();

    return 0;
}