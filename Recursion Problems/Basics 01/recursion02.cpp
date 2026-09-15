// print a name 5 times

#include<iostream>
using namespace std;

void getNaturalNumber(int, int);
int main()
{
    int num, start=1;
    cout<<"Enter how many natural numbers to get printed of"<<endl;
    cin>>num;

    getNaturalNumber(start,num);
    cout<<endl;

    return 0;
}

void getNaturalNumber(int start, int num)
{
    if(start > num)
        return;
    cout<<start<<" ";
    getNaturalNumber(start+1, num);
}
