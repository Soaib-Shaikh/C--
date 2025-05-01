#include<iostream>
using namespace std;

// Insert Element at Specific Position

int main()
{
    int arr[6],pos,num,i;

    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }

    cin>> pos >> num;

    for(i=5; i>pos;i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
    
}