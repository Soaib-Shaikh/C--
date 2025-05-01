#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];    
    for(int i = 0; i < n; i++){
        cout << "Enter the elements: ";
        cin >> arr[i];
    }

    cout <<endl<< "Unsorted array: ";
    {
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bubble_sort(arr, n);
    cout << "Sorted array: ";
    print_array(arr, n);
    return 0;
}