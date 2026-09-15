#include<iostream>
using namespace std;

class Solution
{
    public:
        int sumOfSquaresOfFirstN(int x)
        {
            if(x==0)
                return 0;
            return x*x+sumOfSquaresOfFirstN(x-1);  
        }
};
int main()
{
    Solution s1;
    int num=2;

    int ans = s1.sumOfSquaresOfFirstN(num);
    cout<<"Sum: "<<ans;

    cout<<endl;
    return 0;
}