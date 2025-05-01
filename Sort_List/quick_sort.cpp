#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1; // Index of smaller element

    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1); // Return the partition index
}

void quicksort(vector<int>& arr, int low, int high)
{
    if(low < high) 
    {
        int pi = partition(arr, low, high); // Partition the array and get the pivot index
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high); // Recursively sort the two halves
    }
}

void printArray(vector<int>& arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" "; // Print each element of the array
    }
    cout<<endl; // New line after printing the array
}

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    vector<int> arr(n); // Create a vector of size n
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the elements of array["<<i<<"]: ";
        cin>>arr[i]; // Input the elements of the array
    }

    cout<<endl<<"Array is: ";
    printArray(arr); // Print the original array

    quicksort(arr, 0, arr.size()-1); // Call the quicksort function
    cout<<"Sorted array is: ";
    printArray(arr); // Print the sorted array

    return 0;
}