#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter value of array ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Value of array ["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;
        }
    }
 

    return 0;
}