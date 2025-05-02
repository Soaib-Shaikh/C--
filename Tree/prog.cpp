#include<iostream>
using namespace std;

class Node{
    public: 
        char data;
        Node* left = nullptr;
        Node* right = nullptr;

};

int main()
{
    Node* node4 = new Node();
    node4->data = 'F';
    node4->left = nullptr;
    node4->right = nullptr;

    Node* node3 = new Node();
    node3->data = 'D';
    node3->left = nullptr;
    node3->right = nullptr;

    Node* node1 = new Node();
    node1->data = 'B';
    node1->left = node3;
    node1->right = node3;

    Node* node2 = new Node();
    node2->data = 'C';
    node2->left = node4;
    node2->right = node4;

    Node* root = new Node();
    root->data = 'A';
    root->left = node1;
    root->right = node2;

    cout<<root->left->data<<" - "<<root->data<<" - "<<root->right<<" "<<endl;
    cout<<node1->left<<" - "<<node1->data<<" - "<<node1->right->data<<" "<<endl;
    cout<<node2->left->data<<" - "<<node2->data<<" - "<<node2->right<<" "<<endl;

    return 0;
}