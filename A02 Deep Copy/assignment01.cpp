#include<iostream>
using namespace std;

#define INVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5
#define NULL_POINTER_ERROR 6
class Array
{
    private:
        int capacity;
        int lastIndex;
        int* ptr;
    public:
        Array(int);   //constructor
        Array(Array&);
        Array& operator=(Array &);
        bool isEmpty();
        void createArray(int);
        void append(int);
        bool isFull();
        void insert(int, int);
        void edit(int, int);
        void deleteAt(int);
        int getElementAt(int);
        int count();
        virtual ~Array();
        int find(int);
};

Array::Array(int cap)
{
    ptr = nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity = cap;
    lastIndex = -1;
    ptr = new int[capacity];
}

//******************DEEP COPY*******************************
Array::Array(Array& arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    if(arr.ptr==nullptr)
        ptr=nullptr;
    else
    {
        ptr=new int[capacity];
        for(int i=0;i<arr.lastIndex;i++)
            ptr[i]=arr.ptr[i];
    }
}


// DID not understand 100% and copied................
Array& Array::operator=(Array &arr)
{
    if(this != &arr)
    {
        if(arr.ptr==nullptr)
        {    
            throw NULL_POINTER_ERROR;
        }
        if(ptr!=nullptr)
        {
            delete []ptr;
            ptr=nullptr;
        }
        capacity = arr.capacity;
        lastIndex=arr.lastIndex;
        ptr=new int[capacity];
        for(int i=0;i<=arr.lastIndex;i++)
            ptr[i]=arr.ptr[i];
    }
    return *this;

}

void Array::createArray(int cap)
{
    if(cap<1)
            throw INVALID_CAPACITY;
    if(ptr!=nullptr)
        delete []ptr;
    capacity = cap;
    lastIndex=-1;
    ptr = new int[cap];
}

bool Array::isEmpty()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex==-1;
}

void Array::append(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isFull())
        throw ARRAY_OVERFLOW;
    lastIndex++;
    ptr[lastIndex]=data;

}

bool Array::isFull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex==capacity-1;  //also return lastIndex+1==capacity;
}

void Array::insert(int index, int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isFull())
        throw ARRAY_OVERFLOW;
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    for(int i=lastIndex;i>=index;i--)
        ptr[i+1]=ptr[i];
    ptr[index]=data;
    lastIndex++;
}

void Array::edit(int index, int newData)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index] = newData;
}

void Array::deleteAt(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isEmpty())                   //can be skipped
        throw ARRAY_UNDERFLOW;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    for(int i=index+1; i<=lastIndex; i++)
        ptr[i-1] = ptr[i];
    lastIndex--;
}

int Array::getElementAt(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}

int Array::count()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex+1;
}

Array::~Array()
{
    if(ptr!=nullptr)
        delete []ptr;
}

int Array::find(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    for(int i=0; i<=lastIndex; i++)
        if(ptr[i]==data)
            return i;
    return -1;
}

int main()
{
    bool res;
    Array A1(0);
    res = A1.isEmpty();
    cout<<res;

    return 0;
}