#include<iostream>
using namespace std;

// Merge Two Arrays

int main()
{
    int arr1[3],arr2[3],merged[6];
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
        merged[i] = arr1[i];
    }
    for(int i=0;i<3;i++)
    {
        merged[i+3] = arr2[i];
    }

    for(int i=0;i<6;i++)
    {
        cout<<merged[i]<<endl;
    }

    return 0;
    
}