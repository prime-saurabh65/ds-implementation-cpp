// check palindrome using recursion

#include<iostream>
using namespace std;

bool isPalindrome(string&, int, int);
int main()
{
    string str = "MADAM";
    int len = str.size();
    bool check = isPalindrome(str, 0, len);
    check==true?cout<<"is Palindrome"<<endl:cout<<"is Not Palindorme"<<endl;

    return 0;
}

bool isPalindrome(string &str, int i, int n)
{
    if(i >= n/2)
        return true;
    if(str[i] != str[n-i-1])
        return false;
    return isPalindrome(str, i+1, n);
}