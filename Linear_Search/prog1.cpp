#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int>& arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if( arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void print_result(int result)
{
    if(result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
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
    int result = linear_search(arr, target);
    print_result(result);
   return 0;
}