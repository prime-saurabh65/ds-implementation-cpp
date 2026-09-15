#include<iostream>
using namespace std;
#define List_Empty 1
#define Linked_List_Underflow 2

struct node
{
    int data;
    node* next;
};

class SLL
{
    private:
        node* start;
    public:
        SLL();
        void insertAtBegining(int);
        void insertAtEnd(int);
        int search(int);
        void insertAt(int, int);
        void deleteAtBegining();
        void deleteAtLast();
        void printList();

        ~SLL();




};

// A constructor to initialize start to null;
SLL::SLL()
{
    start=nullptr;
}
void SLL::insertAtBegining(int d)
{
    node* new_node = new node();
    new_node->data = d;
    if(start==nullptr)
        start = new_node;
    else
    {
        node* temp = start;
        new_node->next = temp->next;
        start = new_node;
    }
    // cout<<temp->data;
}
void SLL::insertAtEnd(int d)
{
    node *temp= new node();    // creating a node;
    temp->data=d;
    temp->next = nullptr;   // since it will be a last node;
    if(start==nullptr)      // if linked list is empty;
        start = temp;
    else                    // if linked list is not empty;
    {
        node* n = start;
        while(n->next!=nullptr)
            n = n->next;
        n->next = temp;
    }
}

int SLL::search(int k)
{
    node* temp = start;

    while(temp->next!=nullptr)
    {
        if(temp->data==k)
            return 1;
    }
    if(temp->data==k)
        return 1;
    else
        return 0;
}

void SLL::insertAt(int pos, int d)
{
    node* temp = new node();
    temp->data = d;

    node* temp1;
    
    int i = 1;
    while(i<pos-1)
        temp = temp->next;
    temp1 = temp->next;
    temp->next = temp1;


}

void SLL::deleteAtBegining()
{
    if(start==nullptr)
        throw List_Empty;
    node* temp;
    temp = start;
    start = start->next;
    delete temp;
}

void SLL::deleteAtLast()
{
    if(start==nullptr)
        throw Linked_List_Underflow;
    if(start->next == nullptr)
    {
        delete start;
        start = nullptr;
    }

    node*temp = start;

    while(temp->next->next!=nullptr)
        temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void SLL::printList()
{
    node* temp = start;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp = temp->next;
    }

}


SLL::~SLL()
{}




int main()
{
    int res;
    SLL s1;
    s1.insertAtBegining(5);
    s1.insertAtBegining(4);
    s1.insertAtBegining(12);
    s1.insertAtBegining(7);
    s1.insertAtBegining(9);
    s1.insertAt(4, 20);
    cout<<"data inserted!";
    // cout<<start->data;  // wrong
    // s1.printList();
    // res = s1.search(5);
    // cout<<res<<endl;
    // res = s1.search(4);
    // cout<<res<<endl;
    // res = s1.search(3);
    // cout<<res<<endl;

}