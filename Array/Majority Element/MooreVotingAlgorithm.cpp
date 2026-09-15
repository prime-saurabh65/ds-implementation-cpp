#include<iostream>
using namespace std;
/*
    Moore's Voting ALgorithm works on a condition that there must be a majority
    element in the array(vector).


    (Handle situation when array may not contain Majority Element)
    If you want to handle the situation when array may not contain majority elements
    then after loop ends, check iff the value in ans(variable) exist more than n/2 times.
*/
int MooreVotingAlgorithm(vector<int> nums, int size)
{
    int ans=0, freq=0;

    for(int i=0; i<size; i++)
    {
        if(freq==0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
            freq++;
        else
            freq--;    
    }
    return ans;
}



int main()
{
    vector<int> arr= {0,0,1,1,2,2,2,2,2};
    int size = arr.size();

    int ans = MooreVotingAlgorithm(arr, size);
    cout<<"Majority Element (Moore's Voting Algorithm) is : "<<ans<<endl;

    return 0;
}