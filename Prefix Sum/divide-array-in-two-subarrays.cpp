//Divide array in two subarrays with equal sum O(n)

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,4,-2,5,8,20,-10,8};
    int i, total_sum=0, sum=0,r_sum=0;

    for (i = 0; i < 8; i++)
    {
        total_sum+=arr[i];
    }
    cout<<total_sum<<endl;

    for(i=0; i<8; i++)
    {
        sum = sum+arr[i];
        r_sum = total_sum - sum;
        if(r_sum==sum)
        {
            cout<<"index "<<i<<endl;
            break;
        }
    }

    



    return 0;
}