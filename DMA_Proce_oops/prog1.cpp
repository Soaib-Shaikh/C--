#include<iostream>
using namespace std;

int main(){
    int *arr,size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    arr = new int [size];

    if (arr == NULL){
        cout<<"Error! Memory not Allocated. "<<endl;
        return 1;
    }
    else{
        cout<<"Memory Allocated Successfully. "<<endl;
    }

    delete [] arr;

    arr  = NULL;

    if(arr == NULL){
        cout<<"Memory Deallocated Successfully. "<<endl;
    }
    else{
        cout<<"Error! Memory not Deallocated. "<<endl;
    }

    return 0;
}