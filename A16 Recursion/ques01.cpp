#include<iostream>
using namespace std;

class Solution
{
    public:
        int sumFirstN(int x)
        {
            if(x==0)
                return 0;
            return x+sumFirstN(x-1);  
        }
};
int main()
{
    Solution s1;
    int num=5;

    int ans = s1.sumFirstN(num);
    cout<<"Sum: "<<ans;

    cout<<endl;
    return 0;
}