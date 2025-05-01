#include<iostream>
using namespace std;

// Find an Element in an Array

int main()
{
    int arr[5], key, found=0;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cin>>key;

    for(int i=0;i<5;i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    return 0;
    
}