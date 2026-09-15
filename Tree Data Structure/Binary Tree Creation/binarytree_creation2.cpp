#include <iostream>
using namespace std;

// Binary Tree Node 
class Node
{
    public:
        Node *left;
        int data;
        Node *right;
        Node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node* BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
        return NULL;
    
    Node *temp = new Node(x);

    cout<<"Enter left child of "<<temp->data<<" ";
    temp->left = BinaryTree();
    cout<<"Enter right child of "<<temp->data<<" ";
    temp->right = BinaryTree();
    return temp;

}

void preorder(Node *root)
{
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    cout<<"Enter root node: ";
    Node* root;
    root = BinaryTree();
    preorder(root);
}