#include<iostream>
using namespace std;
int main()
{
    vector<int> nums;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int n=nums.size();
    int expected_sum=n*(n+1)/2;
    int actual_sum=0;
    for(int i=0;i<n;i++)
    {
        actual_sum+=nums[i];
    }
    int missing_element=expected_sum-actual_sum;
    cout<<missing_element<<endl;
    return 0;
}