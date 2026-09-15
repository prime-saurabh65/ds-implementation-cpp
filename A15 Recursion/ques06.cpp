#include<iostream>
using namespace std;

class Solution
{
    public:
        void printFirstNEvenRev(int x)
        {
            if(x==0)
                return;
            cout<<2*x<<" ";
            printFirstNEvenRev(x-1);
        }
};

int main()
{
    Solution s1;
    int num=12;
    s1.printFirstNEvenRev(num);

    cout<<endl;
    
    return 0;
}