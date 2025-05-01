#include<iostream>
using namespace std;

// Reverse an array in place

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int* arr = new int[n];
    int start = 0;
    int end = n-1;

    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<endl<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}