#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
    }
    return -1;
}

void  print_array(vector<int> &arr)
{
    cout<<"Array is: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {10,20,30,40,50,60,70,80,90,100};
    int target, result;

    print_array(arr);

    if(arr.size() != 0)
    {
        cout << "Enter the target element: ";
        cin >> target;
        result = binary_search(arr,target);
    }
    else
    {
        cout<<"Array is Empty."<<endl;
        return 0;
    }

    if(result != -1)
    {  
        cout<<"Entered target "<<target<<" at index: "<<result<<endl;
    }
    else
    {
        cout<<"Entered target "<<target<<" not found."<<endl;
    }

    return 0;
}