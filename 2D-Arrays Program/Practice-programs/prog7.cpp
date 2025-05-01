#include<iostream>
using namespace std;

// Find Maximum Element in a 2d Arrays

int main()
{
    int arr[3][3],j,i,max;

    cout<<"Enter Array A"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Value of arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    max = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout<<"Maximum Value in The Array is: "<<max;
    
    return 0;
}

