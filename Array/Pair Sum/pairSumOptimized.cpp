#include<iostream>
using namespace std;

// Function declaration
vector<int> pairSum(vector<int>nums, int target);

int main()
{
    vector<int> vec = {2,7,11,15};
    int targetSum = 18;

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
    int leftPointer, rightPointer, sum=0;
    vector<int> v;
    

    for(int i=0; i<size/2; i++)
    {
        leftPointer = nums[i];
        rightPointer = nums[size-i-1];

        sum = leftPointer + rightPointer;
        if(sum == target)
        {
            v.push_back(leftPointer);
            v.push_back(rightPointer);
            return v;
        }
    }
    cout<<"No such pair exists\n";
    return v;

}
