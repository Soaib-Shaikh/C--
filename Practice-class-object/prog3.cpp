#include<iostream>
using namespace std;

// Constructor in Class

class Car{
    public: 
        string brand;

    Car(string b){
        brand = b;
    }

    void showbrand(){
        cout<<"Brand is: "<<brand<<endl;
    }
   
};

int main(){
    Car c("BMW");
    c.showbrand();

    return 0;
}