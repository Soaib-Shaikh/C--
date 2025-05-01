#include<iostream>
using namespace std;

class MyClass{
    private:
        int *arr;
        int size;
    
    public:
        MyClass(int size){
            this->size = size;
            arr = new int [this->size];

            if (arr == NULL){
                cout<<"Error! Memory not allocated."<<endl;
            }
            else{
                cout<<"Memory allocated successfully."<<endl;
            }
        }

        ~MyClass(){
            delete [] arr;
            arr = NULL;

            if (arr == NULL){
                cout<<"Memory deallocated successfully."<<endl;
            }
            else{
                cout<<"Error! Memory not deallocated."<<endl;
            }
        }

        void setElement(int index, int value){
            arr[index] = value;

            if(index >=0 && index < size){
                cout<<"Element set successfully."<<endl;
            }
            else{
                cout<<"Error! Index out of bounds."<<endl;
            }
        }

        void getElement(int index){
            if(index >=0 && index < size){
                cout<<"Element arr["<<index<<"] is: "<<arr[index]<<endl;
                cout<<endl;
            }
            else{
                cout<<"Error! Index out of bounds."<<endl;
            }
        }


};

int main(){

    MyClass obj(5);

    obj.setElement(0, 10);
    obj.setElement(1, 20);
    obj.setElement(2, 30);
    obj.setElement(3, 40);
    obj.setElement(4, 50);
    obj.getElement(0);
    obj.getElement(1);
    obj.getElement(2);
    obj.getElement(3);
    obj.getElement(4);
    

    return  0;
}