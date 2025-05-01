#include<iostream>
using namespace std;

// Reverse a linked list using recursion

class Node{
    public:
        int data;
        Node* next;
};

class LinkList{
    public:
        int size;
        Node* head;

        LinkList(){
            head = NULL;
            size = -1;
        }

        void insertAtFront(int data){
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            head = newNode;
            size++;
        }

        void reverseList(){
            Node *prev = NULL, *curr = head, *next;
            while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }         
            head = prev;

        }

        void dispaly(){
            cout << "LinkList: ";
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    LinkList list;
    list.insertAtFront(50);
    list.insertAtFront(40);
    list.insertAtFront(30);
    list.insertAtFront(20);
    list.insertAtFront(10);
    list.dispaly();

    list.reverseList();
    list.dispaly();


    return 0;
}