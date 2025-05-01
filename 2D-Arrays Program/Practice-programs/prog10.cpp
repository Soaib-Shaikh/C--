#include <iostream>
using namespace std;

// Spiral Traversal of a 2d array

int main() 
{
    int arr[3][3];

    cout<<"Enter Array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"array["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    return 0;
}
