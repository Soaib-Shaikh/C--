#include<iostream>
#include<vector>
using namespace std;

// Function to merge two sorted subarrays
void merge(vector<int>& arr, int left, int mid, int right)
{
    int i = left; // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    vector<int> temp; // Temporary array to store merged elements

    // Merge the two subarrays into temp
    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j]) // Compare elements from both subarrays
        {
            temp.push_back(arr[i++]); // Add smaller element to temp
        }
        else
        {
            temp.push_back(arr[j++]); // Add smaller element to temp
        }
    }

    // Copy remaining elements of left subarray, if any
    while(i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    // Copy remaining elements of right subarray, if any
    while(j <= right)
    {
        temp.push_back(arr[j++]);
    }

    // Copy the merged elements back to the original array
    for(int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left]; // Copy from temp to arr
    }
}

// Function to perform merge sort
void mergeSort(vector<int>& arr, int left, int right)
{
    if(left >= right) // Base case: single element or invalid range
        return;

    int mid = left + (right - left) / 2; // Calculate the middle index

    // Sort the left half
    mergeSort(arr, left, mid);

    // Sort the right half
    mergeSort(arr, mid + 1, right);
    
    // Merge the sorted halves
    merge(arr, left, mid, right);
}

// Function to print the elements of the vector
void printVector(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++) // Iterate through the vector
        cout << arr[i] << " "; // Print each element
        cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n; // Input the size of the array

    vector<int> arr(n); // Create a vector of size n

    // Input the elements of the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter the elements of array[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl << "Array is: ";
    printVector(arr); // Print the original array

    mergeSort(arr, 0, arr.size() - 1); // Perform merge sort
    cout << "Sorted array is: ";
    printVector(arr); // Print the sorted array

    return 0;
}