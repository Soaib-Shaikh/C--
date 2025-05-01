#include<iostream>
using namespace std;

// Input and Output of a 2D Array

int main()
{
    int a[3][3],b[3][3];

    cout<<"Enter array a"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter array a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<endl<<"Enter array b"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter array b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }

    cout<<endl<<"Array a "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Array b "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}