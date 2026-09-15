// print a name 5 times

#include<iostream>
using namespace std;

void printName(string name, int n);
int main()
{
    string name;
    int times;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Number of times: ";
    cin>>times;

    printName(name, times);
    return 0;
}
void printName(string name, int n)
{
    if(n==0)
        return;
    cout<<name<<endl;
    printName(name, n-1);
}