#include<iostream>
using namespace std;

// Move Constructor

class Move{
    int *ptr;

    public:
        Move(int value){
            ptr = new int(value);
        }

        Move(Move &&obj){
            ptr = obj.ptr;
            obj.ptr = nullptr;
        }

        void display(){
            if(ptr){
                cout<<"Value: "<<ptr<<endl;
            }else{
                cout<<"Moved Object! no value."<<endl;
            }
        }

        ~Move(){
            delete ptr;
        }
    
};

int main(){
    
    Move obj1(10);
    Move obj2 = move(obj1);
    obj2.display();
    obj1.display();

    
    return 0;
}