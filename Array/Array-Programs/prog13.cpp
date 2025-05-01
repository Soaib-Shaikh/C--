#include<iostream>
using namespace std;

// Seconf Smallest Number in Array

int main()
{
    int arr[5],min,secondMin;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    min = secondMin = arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }

    cout<<"Second Smallest: "<<secondMin<<endl;

    return 0;
    
}