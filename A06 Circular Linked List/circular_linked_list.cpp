#include<iostream>
using namespace std;
#define empty_list 1

struct node
{
    int data;
    node* next;
};

class CLL
{
    private:
        node* last;
    public:
        CLL();
        void insertAtBegining(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(int);  // complete it
        void deleteFirst();
        void deleteLast();
        void deleteSpecific(int);
        // ~CLL();
        void print();
};

CLL::CLL()
{
    last = nullptr;
}
void CLL::insertAtBegining(int d)
{
    node* new_node = new node();
    new_node->data = d;

    if(last == nullptr)
    {
        last = new_node;
        new_node->next = last;
    }
    else
    {
        new_node->next = last->next;
        last->next = new_node;
    }
}

void CLL::insertAtLast(int d)
{
    node* new_node = new node();
    new_node->data = d;

    if(last == nullptr)
    {
        last = new_node;
        new_node->next = last;
    }
    else
    {
        new_node->next = last->next;
        last->next = new_node;
        last=new_node;
    }

}
node* CLL::search(int d)
{
    if(last==nullptr)
        return nullptr;
    node* temp = last->next;
    while(temp!=last)
    {
        if(temp->data == d)
            return temp;
        temp = temp->next;
    }
    if(temp->data==d)
        return temp;
    else
        return nullptr;
}
void CLL::deleteFirst()
{
    if(last == nullptr)
        throw empty_list;
    if(last->next == last)
        deleteLast();
    else
    {
        node* temp = last->next;
        last->next = last->next->next;
        delete temp;
    }
}

void CLL::deleteLast()
{
    if(last==nullptr)
        throw empty_list;
    if(last->next == last)
    {
        delete last;
        last = nullptr;
    }
    else
    {
        node* temp = last->next;
        while(temp->next != last)
            temp = temp->next;
        last = temp;
        temp = temp->next;
        last->next = temp->next;
        delete temp;
    }
}

void CLL::deleteSpecific(int data)
{
    if(last == nullptr)
        throw empty_list;
    if(last->next == last)
    {
        if(last->data == data)
        {
            deleteLast();
            return;
        }
        else
        {
            cout<<"Entered data not in the list!\n";
            return;
        }
    }
    else
    {
        node* temp = last;
        while(temp->next != last)
        {
            if(temp-)
        }
    }
}



void CLL::print()
{
    if(last == nullptr)
        throw empty_list;
    node* temp = last->next;
    while(temp!=last)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;

}

int main()
{
    CLL c1;
    node* ptr=nullptr;
    // c1.insertAtBegining(5);
    // c1.insertAtBegining(10);
    // c1.insertAtBegining(25);
    // c1.inserAtLast(12);
    // c1.inserAtLast(22);
    // c1.insertAtLast(42);
    c1.print();
    cout<<endl;
    c1.deleteFirst();
    c1.print();
    cout<<endl;
    // ptr = c1.search(426);
    // cout<<ptr;
    // cout<<endl;
    return 0;
}