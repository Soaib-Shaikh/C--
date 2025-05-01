#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int top;
        int capacity;

    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int [capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if(isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = data;
    
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
            return;
        }
        top--;
    }

    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
            return;
        }
        cout<<"Top element is: "<<arr[top]<<endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return (top == capacity - 1);
    }

    int size()
    {
        return top + 1;
    }

    void reverse()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
            return;
        }
        int start = 0;
        int end = top;
        while(start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
            return;
        }
        cout<<"Stack elements are: ";
        for(int i = 0; i <= top; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Stack z(5);

    z.push(1);
    z.push(2);
    z.push(3);
    z.push(4);
    z.push(5);
    z.display();

    z.pop();
    z.display();

    z.peek();
    z.display();

    cout<<z.isFull()<<endl;
    cout<<z.isEmpty()<<endl;
    cout<<"Stack Size: "<<z.size()<<endl;

    z.reverse();
    z.display();
    return 0;
}