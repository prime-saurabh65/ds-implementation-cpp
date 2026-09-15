// Find sum from 1 to N using recursion (Parameterised)

#include<iostream>
using namespace std;

void getSumToN(int, int);
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    getSumToN(num, 0);

    return 0;
}

void getSumToN(int num, int sum)
{
    if(num == 0)
    {
        cout<<"Total sum: "<<sum<<endl;
        return;
    }
    getSumToN(num-1, sum+num);
}