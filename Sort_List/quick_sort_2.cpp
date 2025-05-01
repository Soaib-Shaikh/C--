#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int start, int end)
{
    if(start < end)
    {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi -1);
        quickSort(arr, pi + 1, end);

    }
}

void printArray(vector<int>& arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    vector<int> arr(n); 
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the elements of array["<<i<<"]: ";
        cin>>arr[i]; 
    }

    cout<<endl<<"Array is: ";
    printArray(arr); 

    quickSort(arr, 0, arr.size()-1); 
    cout<<"Sorted Array is: ";
    printArray(arr);
    

    return 0;
}