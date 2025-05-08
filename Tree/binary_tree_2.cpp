#include<iostream>
using namespace std;

// Binary tree node structure
class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

static int index = -1;

Node* buildTree(int preorder[])
{
    index++;

    if(preorder[index] == -1){
        return nullptr;
    }

    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Preorder Traversal: Root -> Left -> Right
void Preorder_triversal(Node* root)
{
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    Preorder_triversal(root->left);
    Preorder_triversal(root->right);
}

// Inorder Traversal: Left -> Root -> Right
void Inorder_triversal(Node* root)
{
    if(root == nullptr){
        return;
    }

    Inorder_triversal(root->left);
    cout<<root->data<<" ";
    Inorder_triversal(root->right);
}

// Postorder Traversal: Left -> Right -> Root
void Postorder_triversal(Node* root)
{
    if(root == nullptr){
        return;
    }

    Postorder_triversal(root->left);
    Postorder_triversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    int arr[100] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(arr);

    cout << "Preorder Triversal: ";
    Preorder_triversal(root);
    cout << endl;

    cout<<"Inorder Triversal: ";
    Inorder_triversal(root);
    cout<<endl;

    cout<<"Postorder Triversal: ";
    Postorder_triversal(root);
    cout<<endl;

    return 0;
}