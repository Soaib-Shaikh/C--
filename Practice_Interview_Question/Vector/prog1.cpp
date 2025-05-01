#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter the elements: ";
        cin >> v[i];
    }

    cout << "Elements of the array: ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    v.push_back(10);
    cout << "After adding 10: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    v.pop_back();
    cout << "\nAfter removing  element: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    v.at(2) = 20;
    cout << "\nAfter updating 2nd element: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}