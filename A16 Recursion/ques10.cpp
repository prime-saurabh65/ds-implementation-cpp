#include<iostream>
using namespace std;

class Solution
{
    public:
        int xPowerY(int x, int y)
        {
            if(y==0)
                return 1;
            return x * xPowerY(x, y-1);
        }
};

int main()
{
    Solution s1;
    int base=2, exp=4;

    int ans = s1.xPowerY(base, exp);
    cout<<"Ans: "<<ans;

    cout<<endl;
    return 0;
}