#include<iostream>
using namespace std;

// Find Minimum in an Array

int main()
{
    int arr[5],min;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    min = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Minimum: "<<min<<endl;

    return 0;
    
}