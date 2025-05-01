#include<iostream>
using namespace std;

// Find the missing number in a given range [1...n].



int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the elements of the array: ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int total = (n * (n + 1)) / 2;
    int missing = total - sum;
    cout<<"The missing number is: "<<missing<<endl;

    return 0;
}