#include<iostream>
using namespace std;

// Reverse an Array

int main()
{
    int arr[5];

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i] <<endl;
    }

    return 0;
    
}