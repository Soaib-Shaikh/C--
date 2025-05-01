#include<iostream>
using namespace std;

// Class with Data Members and Member Functions

class Rectengle{

    public: 
        int length,width;

        void setvalue(int l, int w){
            length = l;
            width = w;
        }

        void area(){
            cout<<"Area is: "<<length * width<<endl;
        }
};

int main(){
    Rectengle r;
    r.setvalue(10,2);
    r.area();

    return 0;
}