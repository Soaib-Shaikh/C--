#include<iostream>
using namespace std;

// Function Inside Class

class Hello{
   public:
        void sayhello(){
            cout<<"Hello, World!"<<endl;
        }
    
};
   

int main() {
    Hello h;
    h.sayhello();
   
    return 0;
}