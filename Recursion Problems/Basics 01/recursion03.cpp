// print a name 5 times

#include<iostream>
using namespace std;

void getNaturalNumber(int);
int main()
{
    int num, start=1;
    cout<<"Enter how many natural numbers to get printed of"<<endl;
    cin>>num;

    getNaturalNumber(num);
    cout<<endl;

    return 0;
}

void getNaturalNumber(int num)
{
    if(num==0)
        return;
    cout<<num<<" ";
    getNaturalNumber(num-1);
}
