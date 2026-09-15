#include<iostream>
using namespace std;

// Function declaration
vector<int> pairSum(vector<int>nums, int target);

int main()
{
    vector<int> vec = {2,7,11,15};
    int targetSum = 22;

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
    int sum=0;
    vector<int>v;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            sum = nums[i] + nums[j];
            if(sum == target)
            {
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                break;
            }
        }
    }
    if(v.size() == 0)
    {
        cout<<"No such pair exists\n";
    }
    return v;
}