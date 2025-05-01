#include<iostream>
#include<vector>
using namespace std;

// Reverse the vector

int main(){
    int n;
    vector<int> v1(5,n);
    vector<int> v2;
    
    cout<<"Enter 5 elements: ";
    for(int i = 0; i < 5; i++){
        cin>>n;
        v1[i] = n;
    }

    cout<<"Vector: ";
    for(int i = 0 ;i <v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;
    for(int i = v1.size() - 1; i >= 0; i--){
        v2.push_back(v1[i]);
    }

    cout<<"Reversed Vector: ";
    for(int i =0; i <v2.size(); i++){
        cout<<v2[i]<<" ";
    }


    return 0;
}