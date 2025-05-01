#include<iostream>
using namespace std;

// Seconf Largest Number in Array

int main()
{
    int arr[5],max,secondMax;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    max = secondMax = arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    cout<<"Second Largest: "<<secondMax<<endl;

    return 0;
    
}