#include<iostream>
using namespace std;

int main()
{
    // write your code here
    // vector<int> v1(5, 100);

    // vector<int> v2(5);
    // for(int element: v2)
    //     cout<<element<<" ";

    vector<int> vec1(5, 15);
    vector<int> vec2(vec1);

    for(auto value: vec2)
        cout<<value<<" ";
    return 0;
}