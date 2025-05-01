#include<iostream>
using namespace std;

int main()
{
    int arr[3][3],min,i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value of arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    min = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Min Value in The Array is: "<<min<<endl;

    return 0;
}