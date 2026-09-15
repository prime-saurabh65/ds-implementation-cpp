#include<iostream>
using namespace std;

class Solution
{
    public:
        int rem;
        int sum=0;
        int digitSum(int num)
        {
            if(num==0)
                return 0;
            rem = num%10;
            return rem+digitSum(num/10);
        }

        // Another approach to find digit sum
        int digitSum2(int num)
        {
            if(num)
            {
                rem = num%10;
                sum = sum + rem;
                return digitSum2(num/10);
            }
            else
                return sum;
        }
};
int main()
{
    Solution s1,s2;
    int num = 543;

    int ans = s2.digitSum2(num);
    cout<<"Digit sum: "<<ans<<endl;

    return 0;
}