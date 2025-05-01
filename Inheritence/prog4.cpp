#include<iostream>
using namespace std;

// Hybrid Inheritence

class FindArea{
    public:
    int area,l,w;
};

class Rectangle : public FindArea{
    public: 

        void setRectangle(){
            cout<<"Enter length of Rectangle is: ";
            cin>>l;
            cout<<"Enter Width of Rectangle is: ";
            cin>>w;
            area = l * w;
        }

        void getRectangle(){
            cout<<"Length of Rectangle: "<<l<<endl;
            cout<<"Width of Rectangle: "<<w<<endl;
            cout<<"Area of Rectangle: "<<area<<endl;
        }

};

class Square : public FindArea{
    public:
        void setSquare(){
            cout<<"Enter length of Square is: ";
            cin>>l;
            area = l * l;
        }

        void getSquare(){
            cout<<"Length of Square: "<<l<<endl;
            cout<<"Area of Square: "<<area<<endl;
        }
};

class Result : public Rectangle,public Square{
    
    public: 
        int choice;
        void callData(){
            
            cout<<"Press 1 for Rectangle"<<endl;
            cout<<"Press 2 for square"<<endl;
            cout<<endl;

            cout<<"Enter Your Choice: ";
            cin>>choice;

            switch(choice){
                case 1: 
                    setRectangle();
                    break;

                case 2: 
                    setSquare();
                    break;
            }
        }

        void displayData(){
            
            switch(choice){
                case 1:
                    getRectangle();
                    break;

                case 2: 
                    getSquare();
                    break;

            }
        }       

};

int main(){

    Result r;

    r.callData();
    r.displayData();
    return 0;
}