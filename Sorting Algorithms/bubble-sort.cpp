#include<iostream>

using namespace std;
void bubbleSort(int a[],int size);
int main()
{
    int arr[]={5,4,1,3,2};

    bubbleSort(arr, 5);

    cout<<"Array after bubble sort performed:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}

void bubbleSort(int a[],int size)
{
    int i,j;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}