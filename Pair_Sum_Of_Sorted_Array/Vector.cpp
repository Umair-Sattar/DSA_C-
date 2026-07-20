#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> v,int target)
{
	int start=0,end=v.size()-1;
	vector<int> x;
	while(start<end)
	{
		int sum=v[start]+v[end];
		if(sum>target)
		{
			end--;
		}
		else if(sum<target)
		{
			start++;
		}
		else
		{
			x.push_back(start);
			x.push_back(end);
			return x;
		}
	}
}

int main()
{
	vector<int> v={1,2,3,4,5,6,7};
	int target=10;
	vector<int> ans=pairSum(v,target);
	for(int x:ans)
	{
		cout<<x<<" ";
	}
}