#include<iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            
            }
        }
        swap(arr[i], arr[min_index]);
    }

    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display(int arr[], int n)
{
    cout<<"Array: ";
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
    selection_sort(arr, n);

    return 0;
}