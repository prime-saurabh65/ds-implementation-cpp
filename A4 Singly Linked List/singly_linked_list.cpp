#include<iostream>
using namespace std;

#define Empty_Linked_List 1
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
        void display_list();
        void insertAtEnd(int);
        node* search(int);
        void insertAfter(node*); // not done
        void deleteFirst();
        void deleteLast();
        void deleteSpecific(int); //correct it
        ~SLL();  //check

};

SLL::SLL()
{
    start = nullptr;
};
void SLL::insertAtBegining(int d)
{
    node* new_node = new node();
    new_node->data = d;
    if(start==nullptr)
    {
        new_node->next = nullptr;
        start = new_node;
    }
    else
    {
        // node* temp = start;
        new_node->next = start;
        start = new_node;
    }
}
void SLL::display_list()
{
    if(start==nullptr)
    {
        throw Empty_Linked_List;
    }
    else
    {
        node* temp = start;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }  
}
void SLL::insertAtEnd(int d)
{
    node* new_node = new node();
    new_node->data = d;
    new_node->next = nullptr;

    if(start==nullptr)
    {
        new_node->next = nullptr;
        start = new_node;
    }
    else
    {
        node* temp = start;
        while(temp->next != nullptr)
            temp = temp->next;
        
        temp->next = new_node;
    }
}
node* SLL::search(int d)
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
void SLL:: insertAfter(node* t)
{

}
void SLL:: deleteFirst()
{
    if(start==nullptr)
        throw Empty_Linked_List;
    if(start->next == nullptr)
    {
        delete start;
        start = nullptr;
    }
    else
    {
        node* temp = start;
        temp = start;
        start = start->next;
        delete temp;
    }
}
void SLL:: deleteLast()
{
    if(start==nullptr)
        throw Empty_Linked_List;
    if(start->next == nullptr)
        delete start;
    else
    {
        node* temp = start;
        node* temp1 = nullptr;

        while(temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = nullptr;
        delete temp1;
    }
}

void SLL:: deleteSpecific(int d)
{
    if( start == nullptr)
        throw Empty_Linked_List;
    node* temp = start;

    while(temp != nullptr)
    {
        if (temp->next->data == d)
        {
            node* temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
        }
        else
            temp = temp->next;
    }
}

SLL::~SLL()
{
    while (start != nullptr)
        deleteFirst();
}



int main()
{
    node* ptr;
    SLL s1;
    s1.insertAtBegining(5);
    s1.insertAtBegining(10);
    s1.insertAtBegining(15);
    s1.insertAtBegining(200);

    // s1.insertAtEnd(12);
    s1.deleteSpecific(15);

    s1.display_list();
    // s1.deleteLast();
    s1.display_list();
    // s1.deleteFirst();

    // s1.display_list();
    // ptr = s1.search(51);
    // cout<<ptr<<endl;

    return 0;
}