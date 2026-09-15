#include<iostream>
using namespace std;
#define STACK_EMPTY 1;

struct node
{
    int data;
    node* next;
};

class Stack
{
    private:
        node* top;
    public:
        Stack();
        void push(int);
        int peek();
        int pop();
        bool isEmpty();
        ~Stack();
};

Stack::Stack()
{
    top = nullptr;
}

void Stack::push(int data)
{
    node* newnode = new node();
    newnode->data = data;
    if (top==nullptr)
    {   
        top = newnode;
        newnode->next = nullptr;
    }
    else
    {
        newnode->next = top;
        top = newnode; 
    }
}


int Stack::pop()
{
    if(top == nullptr)
        throw STACK_EMPTY;
    int poppedValue;
    poppedValue = top->data;
    node* temp = top;
    if(top->next != nullptr)
        top = top->next;
    else
        top = nullptr;
    delete temp;
    return poppedValue;
}


int Stack:: peek()
{
    if(top == nullptr)
        throw STACK_EMPTY;
    return top->data;
}


bool Stack::isEmpty()
{
    return top == nullptr;
}


Stack::~Stack()
{
    while(top != nullptr)
        pop();
}


void reverseStack(Stack &s1)
{
    Stack s2,s3;
    while(!s1.isEmpty())
        s2.push(s1.pop());
    while(!s2.isEmpty())
        s3.push(s2.pop());
    while(!s3.isEmpty())
        s1.push(s3.pop());
}
int countDigit(int num)
{
    int count=0;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    return count;
}
bool isPalindrome(int num)
{
    reverseStack(s);

}
int main()
{
    int num;
    Stack st1;
    st1.push(35);
    st1.push(10);
    st1.push(49);
    st1.push(42);
    st1.push(44);
    // st1.pop();
    // st1.pop();
    // st1.pop();
    // num = st1.pop();
    num = st1.peek();
    cout<<num<<endl;
    reverseStack(st1);
    num = st1.peek();

    cout<<num<<endl;

    return 0;
}