#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int left, int right);
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, 0, size-1);

    for(int element: arr)
        cout<<element<<" ";
    return 0;
}

void reverseArray(int arr[], int left, int right)
{
    if(left >= right)
        return;
    swap(arr[left], arr[right]);
    reverseArray(arr, left+1 ,right-1);
}