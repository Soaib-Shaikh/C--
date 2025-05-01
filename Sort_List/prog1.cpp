#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n);

int main()
{
    int n;

    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"elements of array: ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    bubble_sort(arr,n);

    return 0;
}

void bubble_sort(int arr[],int n)
{
    int pass = 0;
    bool swapped = false;
    while(pass < n-1)
    {

        for (int i = 0; i < n - pass - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
            else
            {
                swapped = false;
            }
        }

        if(!swapped)
        {
            break;
        }

        pass++;
    }

    cout<<endl<<"elements of array after sort: ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<endl<<"passes: "<<pass<<endl;

}