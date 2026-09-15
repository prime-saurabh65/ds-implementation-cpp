#include<iostream>
using namespace std;

int MajorityElement(vector<int> nums, int size)
{
    sort(nums.begin(), nums.end());

    int freq = 1, ans=nums[0];
    for(int i=1; i<size; i++)
    {
        if(nums[i] == nums[i-1])
            freq++;
        else
        {
            ans = nums[i];
            freq = 1;
        }
        if(freq>(size/2))
        return ans;
    }
    
    return -1;


}



int main()
{
    vector<int> arr= {0,0,1,1,2,2,2,2,2};
    int size = arr.size();

    int ans = MajorityElement(arr, size);
    cout<<"Majority Element is: "<<ans<<endl;

    return 0;
}