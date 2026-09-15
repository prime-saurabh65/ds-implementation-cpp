#include<iostream>
using namespace std;

class Solution
{
    public:
        int sum=0, rem;
        int reverseNumber(int num)
        {
            if(num)
            {
                rem = num%10;
                this->sum = this->sum*10+rem;
                return reverseNumber(num/10);
            }
            else
                return sum;
        }
};

int main()
{
    int num=2435;
    Solution s1;

    int ans = s1.reverseNumber(num);
    cout<<"Reversed: "<<ans<<endl;
    
    return 0;
}