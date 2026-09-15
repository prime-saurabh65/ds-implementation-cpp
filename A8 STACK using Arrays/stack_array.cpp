#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1
#define INVALID_STACK 2
#define STACK_OVERFLOW 3
#define STACK_UNDERFLOW 4
#define STACK_EMPTY 5

class Stack
{
    private:
        int capacity;
        int top;
        int* ptr;
    public:
        Stack(int);
        void push(int);
        int peek();
        bool isFull();
        bool isEmpty();
        void pop();
        ~Stack();

};

Stack::Stack(int cap)
{
    ptr = nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity = cap;
    top = -1;
    ptr = new int[cap];
    
}
void Stack::push(int data)
{
    if(ptr == nullptr)
        throw INVALID_STACK;
    if(isFull())
        throw STACK_OVERFLOW;
    top++;
    ptr[top] = data;
}

int Stack::peek()
{
    if(ptr == nullptr)
        throw INVALID_STACK;
    if(isEmpty())
        throw STACK_EMPTY;
    return ptr[top];
}

bool Stack::isFull()
{
    if(ptr == nullptr)
        throw INVALID_STACK;
    return top+1==capacity;

}
bool Stack::isEmpty()
{
    if(ptr == nullptr)
        throw INVALID_STACK;
    return top==-1;
}

void Stack::pop()
{
    if(ptr == nullptr)
        throw INVALID_STACK;
    if(isEmpty())
        throw STACK_UNDERFLOW;
    top--;
}

Stack::~Stack()
{
    delete []ptr;
}