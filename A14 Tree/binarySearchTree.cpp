#include<iostream>
using namespace std;
#define TREE_EMPTY 1;

struct node
{
    node* left;
    int item;
    node* right;
};

class BST
{
    private:
        node* root;
    public:
        BST();
        bool isEmpty();
        void insert_new(int);
        void preorder();
};

BST::BST()
{
    root = nullptr;
}
bool BST::isEmpty()
{
    return root==nullptr;
}
void BST::insert_new(int data)
{
    node* new_node = new node();
    new_node->item = data;
    root->left = nullptr;
    root->right = nullptr;
    if(root == nullptr)
    {
        root = new_node;
    }
    else
    {
        node* temp = root;
        while(true)
        {
            if(new_node->item < temp->item)
            {
                if(temp->left == nullptr)
                {
                    temp->left = new_node;
                    break;
                }
                else
                    temp = temp->left;
            }
            else if(new_node->item > temp->item)
            {
                if(temp->right == nullptr)
                {
                    temp->right = new_node;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}

void BST::preorder()
{
    if(root==nullptr)
        throw TREE_EMPTY;
    cout<<root->item;
}