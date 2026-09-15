// Find sum from 1 to N using recursion (Function)

#include<iostream>
using namespace std;

int getSumToN(int, int);
int getSumToN2(int);

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    // int totalSum = getSumToN(1, num);
    int totalSum = getSumToN2(num);
    cout<<totalSum<<endl;

    return 0;
}

int getSumToN(int i, int num)
{
    if(i == num)
        return num;
    return i + getSumToN(i+1, num);
}

// Another approach
int getSumToN2(int n)
{
    if(n==0)
        return 0;
    return n + getSumToN2(n-1);
}