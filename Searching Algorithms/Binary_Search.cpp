#include<iostream>
using namespace std;

int main()
{
    int start,end,mid,key;
    int arr[]={2,4,6,8,10,12,14};
    start=0; end=6;

    cout<<"Enter element you want to search:"<<endl;
    cin>>key;

    while (start <= end)
    {
        mid = (start+end)/2;
        
        if(key<arr[mid])
            end=mid-1;

        else if(key>arr[mid])
            start = mid+1;

        else
        {
            cout<<mid<<endl;
            break;
        }
    }
    if(start>end)
    {
        cout<<"Element not found"<<endl;
    }
    

    return 0;
}