#include<iostream>

#define List_Empty 1
using namespace std;
struct node
{
    node* prev;
    int data;
    node* next;
};

class CDLL
{
    private:
        node* start;
    public:
        CDLL();
        void insertAtBegining(int);
        void insertAtEnd(int);
        bool search(int);
        void insertAfter(int);
        void deleteFirst();
        void deleteLast();
        void deleteSpecific(int);
        // ~CDLL();
        void display();

};

CDLL::CDLL()
{
    start = nullptr;
}
void CDLL::insertAtBegining(int data)
{
    node* new_node = new node();
    new_node->data = data;

    if(start == nullptr)
    {
        start = new_node;
        new_node->next = new_node;
        new_node->prev = new_node;
    }
    else
    {
        start->prev->next = new_node;
        new_node->prev = start->prev;
        new_node->next = start;
        start->prev = new_node;
        start = new_node;
    }
}
void CDLL::insertAtEnd(int data)
{
    if(start == nullptr)
        insertAtBegining(data);
    else
    {
        node* new_node = new node();
        new_node->data = data;
        start->prev->next = new_node;
        new_node->prev = start->prev;
        new_node->next = start;
        start->prev = new_node;
    }
}
bool CDLL::search(int data)
{
    if(start == nullptr)
        throw List_Empty;
    node* temp = start;
    do
    {
        if(temp->data == data)
            return true;
        temp = temp->next;
    } while (temp != start);
    return false;   
}
void CDLL::deleteFirst()
{
    if(start==nullptr)
        throw List_Empty;
    if(start->next == start)
    {
        node* temp = start;
        start = nullptr;
        delete temp;
    }
    else
    {
        node* temp = start;
        start->next->prev = start->prev;
        start->prev->next = start->next;
        delete temp;
    }
}

void CDLL::deleteLast()
{
    if(start == nullptr)
        throw List_Empty;
    if(start->prev == start && start->next == start)
    {
        delete start;
        start = nullptr;
    }
    else
    {
        node* temp = start->prev;
        start->prev = start->prev->prev;
        start->prev->next = start;
        delete temp;
    }
}

void CDLL::display()
{
    if(start == nullptr)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    node* temp = start;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != start);
    
    cout<<endl;
}

int main()
{
    CDLL cd1;
    cd1.insertAtBegining(52);
    cd1.insertAtBegining(24);
    cd1.insertAtBegining(35);
    cd1.insertAtEnd(22);
    cd1.display();
    // cout<<cd1.search(240)<<endl;
    // cd1.deleteFirst();
    cd1.deleteLast();
    cd1.display();

    return 0;
}