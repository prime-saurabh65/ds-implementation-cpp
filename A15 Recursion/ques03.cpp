#include<iostream>
using namespace std;

class Solution
{
    public:
        void printFirstNOdd(int x)
        {
            if(x==0)
                return;
            printFirstNOdd(x-1);
            cout<<2*x-1<<" ";
        }
};

int main()
{
    Solution s1;
    int num=12;
    s1.printFirstNOdd(num);

    cout<<endl;
    
    return 0;
}