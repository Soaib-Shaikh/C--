#include<iostream>
using namespace std;

//  Desstructor in Class

class Sample{
    public: 
        Sample(){
            cout<<"Constructor is Called!"<<endl;
        }

        ~Sample(){
            cout<<"Destructor is called!"<<endl;
        }
   
};

int main(){
    Sample obj;

    return 0;
}