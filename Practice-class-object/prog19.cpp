#include<iostream>
using namespace std;

// Operator Overloading

class Complex {
   
    public:
        int real,image;

        Complex(int r=0,int i=0){
            real =r;
            image =i;
        }

        Complex operator + (Complex obj){
            Complex temp;

            temp.real = real + obj.real;
            temp.image = image + obj.image;
            return temp;
        }

        void display(){
            cout<< real <<" + "<< image <<"i"<<endl;
        }
        
                   
};    

int main() {
    Complex c1(10,2), c2(1,4);
    Complex c3 = c1 + c2;
    c3.display();
    
    return 0;
}
