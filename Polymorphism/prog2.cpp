#include<iostream>
using namespace std;

// Method Overriding

class Shape{
    public:
        virtual  void draw(){
            cout<<"Drawing a Shape"<<endl;
        }

};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"Drawing a Circle"<<endl;
        }
};


int main(){

    Shape *s;
    Circle c;

    s = &c;

    s->draw();

    return 0;
}