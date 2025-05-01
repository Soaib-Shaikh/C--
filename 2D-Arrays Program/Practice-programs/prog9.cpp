#include <iostream>
using namespace std;

// Check if a Matrix is Symmatrix

int main() 
{
    int arr[3][3];
    bool issymmatrix = true;

    cout<<"Enter Array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"array["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (arr[i][j] != arr[j][i]){
                issymmatrix = false;
                break;
            }
        }
    }

    if (issymmatrix){
        cout<<"The Matrix is symmatrix.";
    }
    else{
        cout<<"The Matrix is not symmatrix.";
    }

    return 0;
}
