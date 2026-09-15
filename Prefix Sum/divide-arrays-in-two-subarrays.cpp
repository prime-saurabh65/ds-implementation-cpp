//Divide array in two subarrays with equal sum

#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int arr[] = {3,4,-2,5,8,20,-10,8};
    int i,j,sum1=0,sum2=0;

    for (i = 0; i < 8; i++)
    {
        sum1=0;sum2=0;
        for (j = 0; j <= i; j++)
        {
            sum1 = sum1 + arr[j];
        }

        for (j = i+1; j < 8; j++)
        {
            sum2 = sum2 + arr[j];
        }

        if (sum1 == sum2)
        {
            cout<<"first array:"<<endl;
            for (j = 0; j <= i ; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            cout<<"second array:"<<endl;
            for (j = i+1 ; j < 8 ; j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            break;
            
        }
        
        
        
    }
    


    return 0;
}