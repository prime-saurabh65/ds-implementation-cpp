#include<iostream>
using namespace std;

int getFactorial(int);
void getFactorial2(int, int);
int main()
{
    // int number;
    // cout<<"Enter a number to get factorial: ";
    // cin>>number;
    // int fact = getFactorial(number);
    // cout<<"Factorial is: "<<fact<<endl;

    getFactorial2(-3,1);
    return 0;
}
// Function returns
int getFactorial(int num)
{
    if(num == 0)
        return 1;
    return num * getFactorial(num-1);
}

// parameterised

void getFactorial2(int num, int fact=1)
{
    if(num == 0)
    {
        cout<<"Factorial is: 1"<<endl;
        return;
    }
    if(num == 1)
    {
        cout<<"Factorial is: "<<fact;
        return;
    }
    getFactorial2(num-1, num * fact);
}