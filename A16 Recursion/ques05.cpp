#include<iostream>
using namespace std;

class Solution
{
    public:
        int getFactorial(int x)
        {
            if(x==0)
                return 1;
            return x*getFactorial(x-1);  
        }
};
int main()
{
    Solution s1;
    int num=5;

    int ans = s1.getFactorial(num);
    cout<<"Factorial is: "<<ans;

    cout<<endl;
    return 0;
}