#include<iostream>
#include<stack>
using namespace std;

// Function to check if parentheses are balanced

bool areParenthesesBalanced(const string & expr) {
    stack<char> s;
    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                return false; 
            }
            s.pop();
        }
    }
    return s.empty(); 
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (areParenthesesBalanced(expression)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }

    return 0;
}


stack <char> st;
for(int i=0;i<s.length();i++){
    char ch = s[i];

    if(ch == '()' || ch == '{}' || ch == '[]'){
        st.push(ch);
    }
    else{
        if(!st.empty()){
            if(ch==')' && st.top()=='()' || ch=='}' & st.top()=='{' || ch==']' && st.top()=='[]'){
                st.pop(ch);
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}
if(st.empty()){
    return true;
}
else{
    return false;
}