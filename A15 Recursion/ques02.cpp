#include<iostream>
using namespace std;

class Solution
{
    public:
        void printFirstNRev(int x)
        {
            if(x==0)
                return;
            cout<<x<<" ";
            printFirstNRev(x-1);
        }
};

int main()
{
    Solution s1;
    int num=15;
    s1.printFirstNRev(num);

    cout<<endl;
    
    return 0;
}