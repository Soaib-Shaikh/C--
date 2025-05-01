#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

void print_result(int result) {
    if (result == -1) {
        cout << "Element not found." << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
}

int main()
{
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element ["<< i <<"]: ";
        cin >> arr[i];
    }

    cout<<endl<<"Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to search: ";
    cin >> target;
    int result = binary_search(arr, target);
    print_result(result);
    
    return 0;
}