#include<iostream>
using namespace std;

class Node{
    public: 
      int data;
      Node* left ;
      Node* right;  

        Node(int val){
            data = val;
            left = nullptr;
            right = nullptr;
        }
};

static int index = -1;

// Function to build a binary tree from preorder traversal array
Node* buildTree(int preorder[]){

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
void preorderTraversal(Node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Inorder Traversal: Left -> Root -> Right
void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// Postorder Traversal: Left -> Right -> Root
void postorder(Node* root){
    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    int arr[11] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(arr);
    // printing the tree structure
    cout<<"Preorder Traversal: ";
    preorderTraversal(root);
    cout<<endl;

    // printing the tree structure
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl;

    // printing the tree structure
    cout<<"Postorder Traversal: ";
    postorder(root);
    cout<<endl;

    return 0;
}