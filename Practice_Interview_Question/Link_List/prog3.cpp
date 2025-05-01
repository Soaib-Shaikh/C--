#include<iostream>
using namespace std;

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

        void deleteByValue(int value) {
            if (head == NULL) {
                cout << "List is empty!" << endl;
                return;
            }

            // If the head node contains the value
            if (head->data == value) {
                Node* temp = head;
                head = head->next;
                delete temp;
                size--;
                return;
            }

            // Traverse the list to find the node with the value
            Node* temp = head;
            Node* prev = NULL;
            while (temp != NULL && temp->data != value) {
                prev = temp;
                temp = temp->next;
            }

            // If the value is not found
            if (temp == NULL) {
                cout << "Value not found in the list!" << endl;
                return;
            }

            // Adjust pointers and delete the node
            prev->next = temp->next;
            delete temp;
            size--;
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
    list.insertAtFront(30);
    list.insertAtFront(20);
    list.insertAtFront(10);
    list.dispaly();

    cout<<"Deleting 20 from the list..." << endl;
    list.deleteByValue(20);
    list.dispaly();


    return 0;
}