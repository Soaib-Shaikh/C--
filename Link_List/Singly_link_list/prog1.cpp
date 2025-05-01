#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
};

int main(){
    Node* head = new Node();
    head->data = 1;
    head->next = NULL;

    Node* n2 = new Node();
    n2->data = 2;
    n2->next = NULL;

    Node* n3 = new Node();
    n3->data =3;
    n3->next = NULL;

    cout<<"Singly Linked List: "<< endl;
    cout << head->data << endl; // 1
    cout << n2->data << endl; // 2 
    cout << n3->data << endl; // 3

    return 0;
}