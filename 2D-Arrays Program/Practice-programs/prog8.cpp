#include<iostream>
using namespace std;

// Find Minimum Element in a 2d Arrays

int main()
{
    int arr[3][3],j,i,min;

    cout<<"Enter Array A"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Value of arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    min = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout<<"Minimum Value in The Array is: "<<min;
    
    return 0;
}

