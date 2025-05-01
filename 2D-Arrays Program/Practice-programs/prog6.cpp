#include<iostream>
using namespace std;

// Column Wise Sum of 2d Arrays

int main()
{
    int arr[3][3],j,i;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<"Array is"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(j=0;j<3;j++){
        int colsum=0;
        for(i=0;i<3;i++){
            colsum += arr[i][j];
        }
        cout<<"Sum of column " << j + 1 <<" = "<<colsum<<endl;

    }   
    
    return 0;
}

