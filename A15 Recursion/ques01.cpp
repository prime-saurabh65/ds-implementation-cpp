#include<iostream>
using namespace std;


class Solution
{
    public:
        void printFirstN(int x)
        {
            if(x==0)
                return;
            printFirstN(x-1);
            cout<<x<<" ";
        }
};

int main()
{
    Solution s1;
    int num=15;

    s1.printFirstN(num);
    cout<<endl;
    return 0;
}