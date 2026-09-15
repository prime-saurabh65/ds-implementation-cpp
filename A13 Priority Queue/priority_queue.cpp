#include<iostream>
using namespace std;

struct node
{
    int data;
    int pno;
    node *next;
};
class PriorityQueue
{
    private:
        node *start;
    public:
        PriorityQueue();
        void insert(int,int);    // data and priority_number
        bool isEmpty();
};

PriorityQueue::PriorityQueue()
{
    start = nullptr;
}
bool PriorityQueue::isEmpty()
{
    return start==nullptr;
}
void PriorityQueue::insert(int data, int pno)
{

}


int main()
{
    /* code */
    return 0;
}
