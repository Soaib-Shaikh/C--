#include<iostream>
using namespace std;

// Find Common Elements in Two Arrays

int main()
{
    int arr1[3],arr2[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<endl;
                break;
            }
        }
    }

    return 0;
    
}