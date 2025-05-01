#include<iostream>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;
};

int main(){

    Node* head = new Node();
    head->data = 1;
    head->next = NULL;
    
    Node* second = new Node();
    second->data = 2;
    second->next = NULL;
    head->next = second;

    Node* third = new Node();
    third->data = 3;
    third->next = NULL;
    second->next = third;
    

    cout << "Head data is: " << head->data << endl;
    cout << "Head next is: " << head->next << endl;
    cout << "Second data is: " << second->data << endl;
    cout << "Second next is: " << second->next << endl;
    cout << "Third data is: " << third->data << endl;
    cout << "Third next is: " << third->next << endl;
    cout << "====================" << endl;
    return 0;
}