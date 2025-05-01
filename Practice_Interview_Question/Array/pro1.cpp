#include<iostream>
using namespace std;

// Find the maximum and minimum element in an array

int main()
{
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }

    cout<<"Maximum element in the array is: "<<max<<endl;
    cout<<"Minimum element in the array is: "<<min<<endl;

    return 0;
}