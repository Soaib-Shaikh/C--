#include <iostream>
using namespace std;

template <typename T>

class MyClass{

    public:
        
            T *arr;
            T size;

            MyClass(T size){
                this->size = size;
                arr = new T [this->size];
            }

            ~MyClass(){
                delete [] arr;
                arr = NULL;
            }

            void setData(int index, int value){
                arr[index] = value;
            }


            void getData(){
                for (int i = 0; i < size; i++){
                    cout<<"Element arr["<<i<<"] is: "<<arr[i]<<endl;
                }
            }
};

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<endl;

    MyClass <int> obj(size);

    obj.setData(0, 10);
    obj.setData(1, 20);
    obj.setData(2, 30);
    obj.setData(3, 40);
    obj.setData(4, 50);
    obj.setData(5, 60);
    obj.setData(6, 70);
    obj.setData(7, 80);
    obj.setData(8, 90);
    obj.setData(9, 100);
    obj.getData();

    return 0;
}