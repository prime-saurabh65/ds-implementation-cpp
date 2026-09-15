
#include<iostream>
using namespace std;

class Solution
{
    public:
        int countDigit(int x)
        {
            if(x==0)
                return 0;
            return 1+countDigit(x/10);
        }
};
int main()
{
    Solution s1;
    int num=4883562;

    int ans = s1.countDigit(num);
    cout<<"Total digits: "<<ans;

    cout<<endl;
    return 0;
}