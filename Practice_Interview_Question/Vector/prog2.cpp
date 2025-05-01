#include<iostream>
#include<vector>
using namespace std;

// Iterate over a vector using range-based for loop

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter the elements: ";
        cin >> v[i];
    }

    cout << "Vector is: ";
    for (int element : v) 
    { 
        cout << element << " ";
    }

    return 0;
}