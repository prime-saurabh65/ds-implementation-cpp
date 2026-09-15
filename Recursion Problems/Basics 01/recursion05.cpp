#include<iostream>
using namespace std;

void getRevNaturalNumber(int, int);
int main()
{
    int num;
    cout<<"Enter how many natural numbers to get printed in reverse: "<<endl;
    cin>>num;

    getRevNaturalNumber(1, num);
    cout<<endl;
    return 0;
}

void getRevNaturalNumber(int i, int num)
{
    if(i > num)
        return;
    getRevNaturalNumber(i+1, num);
    cout<<i<<" ";
}