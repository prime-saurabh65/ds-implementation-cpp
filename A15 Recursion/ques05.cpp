#include<iostream>
using namespace std;

class Solution
{
    public:
        void printFirstNEven(int x)
        {
            if(x==0)
                return;
            printFirstNEven(x-1);
            cout<<2*x<<" ";
        }
};

int main()
{
    Solution s1;
    int num=12;
    s1.printFirstNEven(num);

    cout<<endl;
    
    return 0;
}