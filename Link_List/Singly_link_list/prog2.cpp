#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main (){


    Node* head = new Node();
    Node* Current = new Node();

    head->data = 1;
    head->next = NULL;

    Current->data = 2;
    Current->next = NULL;
    head->next = Current;

    Current = new Node();
    Current->data = 3;
    Current->next = NULL;
    head->next->next = Current;

    Current = new Node();
    Current->data = 4;
    Current->next = NULL;
    head->next->next->next = Current;

    Current = new Node();
    Current->data = 5;
    Current->next = NULL;
    head->next->next->next->next = Current;

    cout<<"Singly Linked List is: ";
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}