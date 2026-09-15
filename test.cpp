#include<iostream>
using namespace std;
int factorial(int n);

int main()
{
    int i,n,r,fact,num,den1,den2;
    // cin>>num1>>num2;

    // fact = factorial(6);
    // cout<<fact<<endl;
    cout<<"Enter n and r:\n";
    cin>>n>>r;


    num=factorial(n);
    den1=factorial(n-r);
    den2=factorial(r);

    cout<<(num/(den1*den2));
    
    return 0;
}

int factorial(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
