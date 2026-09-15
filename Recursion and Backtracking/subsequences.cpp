/*
    78. Subsets -> Leetcode
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getSubsequences(vector<int> &arr, vector<int> &output, vector<vector<int>>&ans, int index) {
        // Base Condition :
        if(index >= arr.size()) {
            ans.push_back(output);
            return;
        }

        output.push_back(arr[index]);
        getSubsequences(arr, output, ans, index+1);
        output.pop_back();
        getSubsequences(arr, output, ans, index+1);
    }
};

int main()
{
    vector<int> arr = {3,1,2};
    vector<vector<int>> ans;
    vector<int> output;
    Solution s;
    s.getSubsequences(arr, output, ans, 0);

    cout<<"answer is :"<<endl;

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"END"<<endl;

    return 0;
}