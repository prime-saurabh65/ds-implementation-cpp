#include<iostream>
using namespace std;

class Solution
{
    public:
        int getHCF(int x, int y)
        {
            if(y==0)
                return x;
            return getHCF(y, x%y);
        }
};
int main()
{
    Solution s1;
    int bignum=12, smallnum=10;

    int ans = s1.getHCF(bignum, smallnum);
    cout<<"HCF is: "<<ans<<endl;
    return 0;
}