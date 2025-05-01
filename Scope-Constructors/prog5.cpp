#include<iostream>
using namespace std;

//  Destructor

class destructor{
    public:
        destructor(){
            cout<<"Constructor Called!"<<endl;
        }

        ~destructor(){
            cout<<"Destructor Called!"<<endl;
        }
    
};

int main(){
    destructor();
    
    return 0;
}