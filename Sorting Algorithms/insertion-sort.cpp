#include<iostream>

using namespace std;
void insertionSort(int a[],int size);
int main()
{
    int arr[]={5,4,1,3,8};

    insertionSort(arr, 5);

    cout<<"Array after insertion sort performed:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}

void insertionSort(int a[],int size)
{
    int i,j,temp;

    for(i=1;i<size;i++)
    {
        temp = a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = temp;
    }
}