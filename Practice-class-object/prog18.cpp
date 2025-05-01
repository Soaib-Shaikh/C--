#include<iostream>
using namespace std;

// Function Overloading

class Math {
   
    public:
        int add(int a, int b){
           return  a + b;
        }

        double add(double a, double b){
            return a + b;
        }
    
                   
};
     

int main() {
    Math m;
    cout<<"Sum (int): "<<m.add(10,2)<<endl;
    cout<<"Sum (double): "<<m.add(10.5,2.5)<<endl;
    
    return 0;
}
