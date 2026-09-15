#include<iostream>
using namespace std;

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
};
BST::BST()
{
    root = NULL;
}
bool BST::isEmpty()
{
    return root==nullptr;
}


