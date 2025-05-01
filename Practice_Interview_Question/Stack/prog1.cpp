#include<iostream>
#include<stack>
using namespace std;

// Push and pop using STL stack.

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.top();
    s.pop();
    cout << "Top element is: " << s.top() << endl; 
    cout << "Stack elements (from top to bottom): ";

    while (!s.empty()) {
        cout << s.top() << " "; 
        s.pop();              
    }
    cout << endl;

  
    return 0;
}