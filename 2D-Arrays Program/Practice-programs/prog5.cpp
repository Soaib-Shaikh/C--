#include<iostream>
using namespace std;

// Row Wise Sum of 2d Arrays

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
    for(i=0;i<3;i++){
        int rowsum=0;
        for(j=0;j<3;j++){
            rowsum += arr[i][j];
        }
        cout<<"Sum of row " << i  <<" = "<<rowsum<<endl;

    }   
    
    return 0;
}

