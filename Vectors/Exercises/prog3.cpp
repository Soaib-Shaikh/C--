#include<iostream>
#include<vector>
using namespace std;

// 

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector <int> v1(n);
    vector <int> v2;

    for(int i = 0; i < v1.size(); i++){
        cout<<"Enter element: ";
        cin>>v1[i];
    }

    for(int i = 1; i < v1.size() - 1; i++){
        if(v1[i] < v1[i-1] && v1[i] < v1[i+1]){
            v2.push_back(v1[i]);
        }
    }

    cout<<"Only Pritning the elemetns whoose left and right elements are greater than it: ";
    for(int elm : v2){
        cout<<elm<<" ";
    }
    


    return 0;
}