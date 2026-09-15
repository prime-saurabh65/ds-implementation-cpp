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

int main()
{
    int x;
    cout << "Enter the value of root node: ";
    cin >> x;
    int first, second;
    queue<Node*> q;
    Node *root = new Node(x);
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<": "<<endl;
        cin>>first;
        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter right child of "<<temp->data<<": "<<endl;
        cin>>second;

        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}