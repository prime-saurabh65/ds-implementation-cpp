#include<iostream>
using namespace std;
class Array
{
    private:
        int capacity;
        int last_index;
        int* ptr;
    public:

        Array(int size)
        {
            if(size<1)
            int* arr = new int[size];
            ptr = arr;
            last_index=-1;
        }

        //method to check if array is empty
        bool checkEmpty()
        {
            if(last_index==-1)
                return true;
            else
                return false;
        }

        void append(int* a,int num)
        {
            last_index+=1;
            a[last_index] = num;
        }

        void appendAtIndex(int* a, int index,int data, int size)
        {
            if(index > size-1 ||index <0)
            {
                cout<<"cannot be inserted"<<endl;
            }
            else if(index>last_index && index<size)
            {
                a[index] = data;
            }

            else if(index < size-1 && index > -1)
            {
                int temp;
                last_index+=1;
                for(int i=last_index; i>index; i--)
                {
                    a[i] = a[i-1];
                }
                a[index] = data;
            }
        }

        void EditAtIndex(int* a, int data, int index, int size)
        {
            if(index > size-1 ||index <0)
            {
                cout<<"cannot be inserted"<<endl;
            }
            else if(index>-1 && index<size)
            {
                a[index] = data;
            }

        }

        void deleteAtIndex(int* a, int index,int data, int size)
        {
            if(index > size-1 ||index <0)
            {
                cout<<"cannot be deleted"<<endl;
            }
            else if(index>last_index)
            {
                cout<<"No data entered here to delete"<<endl;
            }

            else
            {
                int temp;
                last_index+=1;
                for(int i=index; i<last_index; i++)
                {
                    a[i] = a[i+1];
                }
                last_index-=1;
            }
        }

        bool checkFull(int*a, int size)
        {
            if(last_index==size)
                return true;
            else
                return false;
        }

        int getElementAtIndex(int* a, int size, int index)
        {
            if(index > size-1 ||index <0)
            {
                cout<<"Wrong index input:"<<endl;
            }
            else if(index>last_index)
            {
                cout<<"No data has been entered here"<<endl;
            }
            else
            {
                return a[index];
            }
        }

        int countElement(int* a,int size)
        {
            return last_index+1;
        }

        ~Array()
        {
            free(ptr);
        }
        
        int findElement(int* a, int data)
        {
            for(int i=0; i<=last_index; i++)
            {
                if(a[i]==data)
                    return i;
            }
            return -1;
        }

};