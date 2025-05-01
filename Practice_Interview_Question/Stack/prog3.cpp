#include<iostream>
#include<stack>
using namespace std;

// Reverse a string using stack.

void reverseString(string &str) {
    stack<char> s;
    // Push each character of the string onto the stack
    for (char c : str) {
        s.push(c);
    }
    str.clear(); // Clear the original string
    // Pop characters from the stack and append to the string
    while (!s.empty()) {
        str += s.top();
        s.pop();
    }
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Original string: " << str << endl;
    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}