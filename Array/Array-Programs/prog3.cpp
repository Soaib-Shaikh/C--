#include<iostream>
using namespace std;

// Find Maximum in an Array

int main()
{
    int arr[5],max;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"Maximum: "<<max<<endl;
    return 0;
    
}