#include<iostream>
using namespace std;

// Find Max Value in Array

int main()
{
    int arr[3][3],max;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<"Enter value of array ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    max = arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Max value in The Array is: "<<max;

    return 0;
}