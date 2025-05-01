#include<iostream>
using namespace std;

class Stack{
    private:
        int* arr;
        int top;
        int capacity;

    public:
        Stack(int capacity){
            this->capacity = capacity;
            arr = new int[capacity];
            top = -1;
        }

        ~Stack(){
            delete[] arr;
        }

        void push(int data);
        void pop();
        void peek();
        bool isEmpty();
        bool isFull();
        int size();
        void display();

};

void Stack::push(int data){
    if(isFull()){
        cout << "Stack Overflow" << endl;
        return;
    }
    arr[++top] = data;
}

void Stack::pop(){
    if(isEmpty()){
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
}

void Stack::peek(){
    if(isEmpty()){
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return (top == capacity - 1);
}

int Stack::size(){
    return top + 1;
}

void Stack::display(){
    cout << "Stack elements: ";
    for(int i = 0; i <= top; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.display(); 

    stack.pop();
    stack.peek();
    stack.display();

    cout<<"Size of stack: " << stack.size() << endl;
    cout<<stack.isEmpty() << endl;
    cout<<stack.isFull() << endl;
    return 0;
}