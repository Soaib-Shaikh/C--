#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){

    Node* head = new Node();
    Node* current = new Node();

    head->data = 10;
    head->next = NULL;

    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    head->next->next = current;

    current = new Node();
    current->data = 40;
    current->next = NULL;
    head->next->next->next = current;

    current = new Node();
    current->data = 50;
    current->next = NULL;
    head->next->next->next->next = current;

    current = new Node();
    current->data = 60;
    current->next = NULL;
    head->next->next->next->next->next = current;

    current = new Node();
    current->data = 70;
    current->next = NULL;
    head->next->next->next->next->next->next = current;

    current = new Node();
    current->data = 80;
    current->next = NULL;
    head->next->next->next->next->next->next->next = current;

    current = new Node();
    current->data = 90;
    current->next = NULL;
    head->next->next->next->next->next->next->next->next = current;

    current = new Node();
    current->data = 100;
    current->next = NULL;
    head->next->next->next->next->next->next->next->next->next = current;

    cout << "Singly Linked List address is: ";
    while (head != NULL){
        cout << head->next << " ";
        head = head->next;
    }

    return 0;
}