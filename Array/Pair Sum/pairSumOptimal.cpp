#include<iostream>
using namespace std;

// Function declaration
vector<int> pairSum(vector<int>nums, int target);

int main()
{
    vector<int> vec = {2,7,11,15};
    int targetSum = 26;

    vector<int> receivedVector = pairSum(vec, targetSum);
    for(int element: receivedVector)
    {
        cout<<element<<" ";
    }
    cout<<endl;


    return 0;
}

// Function definition
vector<int> pairSum(vector<int>nums, int target)
{
    int size = nums.size();
    int leftPointer = 0, rightPointer=size-1, sum=0;
    vector<int> v;

    while(leftPointer < rightPointer)
    {
        sum = nums[leftPointer] + nums[rightPointer];

        if(sum < target)
        {
            leftPointer++;
        }
        else if(sum > target)
        {
            rightPointer--;
        }
        if(sum == target)
        {
            v.push_back(nums[leftPointer]);
            v.push_back(nums[rightPointer]);
            return v;
        }
    }
    
    cout<<"NO such pair exists\n";
    return v;
}
