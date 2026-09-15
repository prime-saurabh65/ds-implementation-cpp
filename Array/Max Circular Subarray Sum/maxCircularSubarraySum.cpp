#include<iostream>
using namespace std;

class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // code here
        int ans = INT_MIN;
        int sum=0;
        int n = arr.size();
        int pre=1,suff=1;
        
        for(int i=0;i<n;i++)
        {
            if(pre==0) pre=1;
            if(suff==0) suff=1;

            pre = pre*arr[i];
            suff = suff*arr[n-i-1];

            ans = max(ans, max(pre,suff));
        }
        return ans;
        
    }
};

int main()
{
    vector<int> vec={-2, 6, -3, -10, 0, 2};
    Solution s1;
    int ans = s1.circularSubarraySum(vec);
    cout<<"Max Circular Subarray Sum: "<<ans<<endl;
    return 0;
}