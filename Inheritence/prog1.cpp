#include<iostream>
using  namespace std;

// Single Inherintence

class Car{
    public: 
        string name;
        int price;

};

class Brand : public Car{
    public:
        string brandname;
        int price;

        void setCar(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Price: ";
            cin>>price;
        }

        void setBrand(){
            cout<<"Enter Brandname: ";
            cin>>brandname;
            cout<<"Enter Price: ";
            cin>>price;
        }

        void getCar(){
            cout<<"Car Name: "<<name<<endl;
            cout<<"Car Price: "<<price<<endl;
            cout<<endl;
        }

        void getBrand(){
            cout<<"Brand Name: "<<brandname<<endl;
            cout<<"Brand Price: "<<price<<endl;
            cout<<endl;
        }
};

int main(){
    Brand b;

    b.setCar();
    b.setBrand();

    b.getCar();
    b.getCar();

    return 0;
}