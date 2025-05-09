#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
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

            if(head == NULL)
            {
                head = newNode;
            }
            else
            {
                Node* temp = head;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            size++;
        }

        void insertAtIndex(int index, int element){
            Node* newNode = new Node();
            newNode->data = element;

            if(index == 0)
            {
                insertAtFront(element);
            }
            else if (index > 0 && index <= size -1)
            {
                Node* temp = head;
                for(int i = 0; i < index - 1; i++)
                {
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
                size++;
            }
        }

        void deleteAtIndex(int index){
            if(index == 0)
            {
                Node* temp = head;
                head = head->next;
                delete temp;
                size--;
            }
            else if(index > 0 && index <= size - 1)
            {
                Node* temp = head;
                for(int i = 0; i < index; i++)
                {
                    temp = temp->next;
                }
                Node* toDelete = temp->next;
                temp->next = toDelete->next;
                delete toDelete;
                size--;
            }
        }

        void reverseList()
        {
            Node* prev = NULL;
            Node* current = head;
            Node* next = NULL;

            while(current != NULL)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }
        
        void displayData(){
            cout<<"LinkList: ";
            Node* temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp =temp->next;
            }
            cout<<endl;
        }
};

int main(){

    LinkList list;

    list.insertAtFront(30);
    list.insertAtFront(20);
    list.insertAtFront(10);
    list.displayData();

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.displayData();

    list.insertAtIndex(3,40);
    list.displayData();
    
    list.deleteAtIndex(3);
    list.displayData();

    return 0;
}