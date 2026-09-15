#include<iostream>
using namespace std;

class Solution
{
    public:
        void getBinary(int x)
        {
            if(x==0)
                return;

            getBinary(x/2);
            cout<<x%2<<"";
        }
};
int main()
{
    Solution s1;
    int num=20;

    s1.getBinary(num);

    cout<<endl;
    return 0;
}