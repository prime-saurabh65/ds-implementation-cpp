#include<iostream>

using namespace std;
void selectionSort(int a[],int size);
int main()
{
    int arr[]={5,4,1,3,2};

    selectionSort(arr, 5);

    cout<<"Array after selection sort performed:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}

void selectionSort(int a[],int size)
{
    int i,j,minPos;

    for(i=0;i<size-1;i++)
    {
        minPos = i;
        for(j=i+1;j<size;j++)
        {
            if(a[minPos]>a[j])
                minPos = j;               
        }
        swap(a[minPos], a[i]);
    }
}