#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkList
{
public:
    int size;
    Node *head;

    LinkList()
    {
        head = NULL;
        size = -1;
    }

    void insertAtFront(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        size++;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAtIndex(int index, int element)
    {
        Node *newNode = new Node();
        newNode->data = element;

        if(index == 0)
        {
            insertAtFront(element);
        }
        else if(index > 0 && index <= size)
        {
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }        
    }

    void updateAtindex(int index, int element){        
            Node *temp = head;
            for (int i = 0; i < index ; i++)
            {
                temp = temp->next;
            }
            temp->data = element;
    }

    void deleteAtFront()
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void deleteAtEnd()
    {
        Node* temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        size--;
    }

    void deleteAtindex(int index)
    {
        if(index == 0)
         {
             Node* temp = head;
             head = head->next;
             delete temp;
             size--;
         }
         else if(index > 0 && index <= size)
         {
             Node* temp = head;
             for (int i = 0; i < index - 1; i++)
             {
                 temp = temp->next;
             }
             Node* toDelete = temp->next;
             temp->next = toDelete->next;
             delete toDelete;
             size--;
         }     
 }

    void display()
    {
        cout << "LinkList: ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){

    LinkList list;

    list.insertAtFront(20);
    list.insertAtFront(10);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();
    list.insertAtIndex(2, 25);
    list.display();
    list.updateAtindex(3, 35);
    list.display();
    list.deleteAtFront();
    list.display();
    list.deleteAtEnd();
    list.display();


    return 0;
}