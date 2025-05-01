#include<iostream>
using namespace std;

// Copy Constructor

class copyexample{
    int x;

    public:
        copyexample(int value){
            x = value;
        }
        copyexample(const copyexample &obj){
            x = obj.x;
        }

        void display(){
            cout<<"Value: "<<x<<endl;
        }
    
};

int main(){
    copyexample obj1(10);
    copyexample obj2 = obj1;
    obj2.display();
    
    return 0;
}