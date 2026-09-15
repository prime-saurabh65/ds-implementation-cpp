#include<iostream>
using namespace std;

class Solution
{
    public:
        void printFirstNOddRev(int x)
        {
            if(x==0)
                return;
            cout<<2*x-1<<" ";
            printFirstNOddRev(x-1);
        }
};

int main()
{
    Solution s1;
    int num=12;
    s1.printFirstNOddRev(num);

    cout<<endl;
    
    return 0;
}