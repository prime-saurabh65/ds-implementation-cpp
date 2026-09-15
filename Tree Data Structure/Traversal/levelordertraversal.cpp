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
void inorder(Node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void levelorder(struct Node* root)
{
    queue<Node*> q;
    q.push(root);
    vector<int> v;
    Node *temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        v.push_back(temp->data);

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }

    for(int i=0;  i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}

int countNodes(Node* root)
{
    if(root == nullptr)
        return 0;
    return (1 + countNodes(root->left) + countNodes(root->right));
}

int sumTree(Node* root)
{
    if(root == nullptr)
        return 0;
    return (root->data + sumTree(root->left) + sumTree(root->right));
}

int countLeaves(Node* root)
{
    if(root == nullptr)
        return 0;
    if(root->left == nullptr && root->right == nullptr)
        return 1;
    return (countLeaves(root->left) + countLeaves(root->right));

}
int countNonLeaf(Node* root)
{
    if(root == nullptr)
        return 0;
    if(root->left == nullptr && root->right == nullptr)
        return 0;
    return (1 + countNonLeaf(root->left) + countNonLeaf(root->right));

}

int main()
{
    cout<<"Enter root node: ";
    Node* root;
    root = BinaryTree();
    cout<<"Total number of nodes in the tree: "<<countNodes(root)<<endl;
    // cout<<"Preorder Traversal " ;
    // preorder(root);
    // cout<<endl;

    // cout<<"Inorder Traversal " ;
    // inorder(root);
    // cout<<endl;

    // cout<<"Postorder Traversal " ;
    // postorder(root);
    // cout<<endl;

    // cout<<"Level Order Traversal " ;
    // levelorder(root);
    cout<<endl;

    cout<<"Sum of the tree is: "<< sumTree(root)<<endl;
    cout<<"Number of leaf nodes: "<<countLeaves(root)<<endl;
    cout<<"Number of non-leaf nodes: "<<countNonLeaf(root)<<endl;

    
}