// print 1 to N, but by Backtracking


#include<iostream>
using namespace std;

void getNaturalNumber(int);
int main()
{
    int num;
    cout<<"Enter how many natural numbers to get printed of"<<endl;
    cin>>num;

    getNaturalNumber(num);
    cout<<endl;

    return 0;
}

void getNaturalNumber(int num)
{
    if(num == 0)
        return;
    getNaturalNumber(num-1);
    cout<<num<<" ";
}
