#include<iostream>

using namespace std;
void countSort(int a[],int size);
int main()
{
    int arr[]={1,4,1,3,2,4,3,7};

    countSort(arr, 8);

    cout<<"Array after count sort performed:"<<endl;

    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}

void countSort(int a[],int size)
{
    int i;
    int b[size];
    for (i = 0; i < size; i++)
        b[i]=0;
    
    for (i = 0; i < size; i++)
    {
        
        if (a[i] == i)
        {
            
        }

    }
    

}