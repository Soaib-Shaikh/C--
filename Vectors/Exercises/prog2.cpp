#include<iostream>
#include<vector>
using namespace std;

// Matrix is a 2D Vector

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector <int> v1(n);
    vector <vector<int>> v2(n,v1);


    for(int i=0;i <v2.size();i++){
        for(int j=0;j<v1.size();j++){
            cout<<"v["<<i<<"]["<<j<<"]: ";
            cin>>v2[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i <v2.size();i++){
        for(int j=0;j<v1.size();j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}