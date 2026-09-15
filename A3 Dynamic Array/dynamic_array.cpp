#include<iostream>
using namespace std;

#define INVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
// #define 
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int* ptr;
    public:
        DynArray(int);
        void doubleArray();
        void halfArray();
        void createArray(int);
        bool isEmpty();
        bool isFull();
        int isCurrentCapacity();
        void append(int);
        void insertAt(int,int);
        void edit(int,int);
        void deleteAt(int);
        int getElementAt(int);
        int count(int);
        ~DynArray();
        int find(int);
};

DynArray::DynArray(int cap)
{
    ptr=nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity=cap;
    ptr=new int[cap];
    lastIndex=-1;       
}

void DynArray::createArray(int cap)
{
    if(cap<1)
        throw INVALID_CAPACITY;
    if(ptr!=nullptr)
        delete []ptr;
    ptr = new int[cap];
    lastIndex=-1;
}

bool DynArray:: isEmpty()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex==-1;
}

bool DynArray::isFull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex==capacity-1;
}
void DynArray::doubleArray()
{
    if (ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    
    if (isFull())
    {
        int* temp=new int[capacity*2];
        for(int i=0;i<=lastIndex;i++)
        {
            temp[i]=ptr[i];
        }
        delete []ptr;
        ptr=temp;
        delete []temp;
        
    }
    
}

void DynArray::halfArray()
{
    if (ptr==nullptr)
        throw ARRAY_NOT_CREATED;

    if(lastIndex==capacity/2)
}

int DynArray::isCurrentCapacity()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex;
}

void DynArray::append(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isFull())
        throw ARRAY_OVERFLOW;
    lastIndex++;
    ptr[lastIndex]=data;
}

void DynArray::insertAt(int index, int data)
{
    if (ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    
    for(int i=lastIndex;i>=index;i--)
        ptr[i+1]=ptr[i];
    
    ptr[index]=data;
    lastIndex++;
}

void DynArray::edit(int index, int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index]=data;
}
void DynArray::deleteAt(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    for(int i=index;i<lastIndex;i++)
        ptr[i]=ptr[i+1];
    lastIndex--;
}

int DynArray::getElementAt(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}

int DynArray::count(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    int count=0;
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==data)
            count++;
    }
    return count;    
}

DynArray::~DynArray()
{
    if(ptr!=nullptr)
        delete []ptr;
}

int DynArray::find(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==data)
            return i;
    }
    return -1;  
}

