#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout<<"Sorted array is: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void display(int arr[], int n)
{
    cout<<endl<<"Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element arr["<<i<<"]: ";
        cin>>arr[i];
    }

    display(arr, n);
    insertion_sort(arr, n);
    return 0;
}








