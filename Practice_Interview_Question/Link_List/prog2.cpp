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

        void insertAtEnd(int data){
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = NULL;
            if(head == NULL){
                head = newNode;
            }else{
                Node* temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        void insertAtIndex(int index, int element){
            Node* newNode = new Node();
            newNode->data = element;

            if(index == 0)
            {
                insertAtFront(element);
            }
            else if(index > 0 && index <= size)
            {
                Node* temp = head;
                for(int i = 0; i < index - 1; i++){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
                size++;
            }        
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

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.dispaly();

    list.insertAtIndex(2, 25);
    list.insertAtIndex(0, 5);
    list.dispaly();
    return 0;
}