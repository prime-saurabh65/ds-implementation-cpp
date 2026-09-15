#include<iostream>
using namespace std;

// Need Correction

class Solution
{
    public:
        void cyclicSort(vector<int> &arr)
        {
            int i;
            for(i=0; i<arr.size(); i++)
            {
                int correct = arr[i]-1;
                if(arr[i] != arr[correct])
                    swap(arr[i], arr[correct]);
                else
                    i++;
            }
        }
};

int main()
{
    vector<int>vec = {3,5,2,1,4};

    Solution s1;
    s1.cyclicSort(vec);

    for(auto num: vec)
        cout<<num<<" ";
    return 0;
}