#include<iostream>
using namespace std;

// Remove Duplicates from Array

int main()
{
    int arr[5],uniqueArr[5],size=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<5;i++)
    {
        bool isDuplicate = false;
        for(int j=0;j<size;j++)
        {
            if(arr[i] == uniqueArr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if(isDuplicate)
        {
            uniqueArr[size] = arr[i];
            size++;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<uniqueArr[i]<<endl;
    }
    return 0;
    
}