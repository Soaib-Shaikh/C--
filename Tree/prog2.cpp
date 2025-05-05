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
    Node* root = new Node();
    root->data = 'A';
    root->left = nullptr;
    root->right = nullptr;

    Node* node1 = new Node();
    node1->data = 'B';
    node1->left = nullptr;
    node1->right = nullptr;

    Node* node2 = new Node();
    node2->data = 'C';
    node2->left = nullptr;
    node2->right = nullptr;

    Node* node3 = new Node();
    node3->data = 'D';
    node3->left = nullptr;
    node3->right = nullptr;

    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node3;
    node2->left = root;
    node2->right = node1;
    node3->left = root;
    node3->right = node2;

    cout<<root->left->data<<" - "<<root->data<<" - "<<root->right<<" "<<endl;
    cout<<node1->left<<" - "<<node1->data<<" - "<<node1->right->data<<" "<<endl;
    cout<<node2->left->data<<" - "<<node2->data<<" - "<<node2->right<<" "<<endl;
    cout<<node3->left<<" - "<<node3->data<<" - "<<node3->right->data<<" "<<endl;

    return 0;
}