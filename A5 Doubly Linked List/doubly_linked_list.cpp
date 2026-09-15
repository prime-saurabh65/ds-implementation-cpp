#include<iostream>
using namespace std;
#define Doubly_Linked_List_Empty 1

struct node
{
    node* prev;
    int data;
    node* next;
};

class DLL
{
    private:
        node* start;
    public:
        DLL();
        void insertAtBegining(int);
        void insertAtEnd(int);
        node* insertAfter(int);
        node* search(int);
        void deleteFirst(); // solved error: problem for list having one node;
        void deleteLast();
        void deleteSpecific(int); // not done yet

        void print_list();
};
DLL::DLL() 
{
    start = nullptr;
}
void DLL::insertAtBegining(int d)
{
    node* new_node = new node();
    new_node->data = d;
    new_node->prev = nullptr;    // since it will be a first node

    if(start == nullptr)
    {
        start = new_node;
        new_node->next = nullptr;
    }
    else
    {
        new_node->next = start;
        start->prev = new_node;
        start = new_node;
    }
}
void DLL:: insertAtEnd(int d)
{
    node* new_node = new node();
    new_node->data = d;
    new_node->next = nullptr;

    if(start == nullptr)
    {
        start = new_node;
        new_node->prev = nullptr;
    }
    else
    {
        node* temp = start;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;

    }
}
node* DLL::insertAfter(int d)
{
    
}
node* DLL::search(int d)
{
    if(start==nullptr)
        return nullptr;
    node* temp = start;
    while(temp!=nullptr)
    {
        if(temp->data == d)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

void DLL::deleteFirst()
{
    if(start == nullptr)
        throw Doubly_Linked_List_Empty;
    node* temp = start;
    start = start->next;

    if(start != nullptr)    // Error Solved:   if(start->mext != nullptr)
        start->prev = nullptr;
    delete temp;
    
}

void DLL::deleteLast()
{
    if(start == nullptr)
        throw Doubly_Linked_List_Empty;
    if(start->next == nullptr)
    {
        node* temp = start;
        start = nullptr;
        delete temp;
    }
    else
    {
        node* temp = start;
        node* temp1;
        while(temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = nullptr;
        delete temp1;
    }
}

void DLL::deleteSpecific(int d)
{
    if(start == nullptr)
        throw Doubly_Linked_List_Empty;
    if(start->next == nullptr)
    {
        if(start->data == d)
        {
            node* temp = start;
            start = nullptr;
            delete temp;
        }
    }
    else
    {
        node* temp = start;
        node* temp1;
        while(temp->next->data == d)
        {
            temp = temp->next;
        }
        // if(temp->next->next == nullptr)
        // {
        //     temp1 = temp->next
        //     temp->next = nullptr;
        // }
    }
}
void DLL:: print_list()
{
    if(start == nullptr)
        throw Doubly_Linked_List_Empty;
    node* temp = start;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    node* res;
    DLL d1;
    d1.insertAtBegining(23);
    d1.insertAtBegining(2);
    d1.insertAtBegining(25);
    d1.insertAtEnd(90);
    d1.print_list();
    cout<<endl;
    d1.deleteLast();
    d1.print_list();


    // res = d1.search(29);
    // cout<<res;



    cout<<endl;
    return 0;
}
