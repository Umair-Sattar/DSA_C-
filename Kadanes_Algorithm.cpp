#include<iostream>
#include<vector>
#include<climits>
using namespace std;    
int main()
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int currentSum=0,maxSum=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        currentSum+=nums[i];
        maxSum=max(maxSum,currentSum);
            if(currentSum<0)
            {
                currentSum=0;
            }
     }
     cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;
}        