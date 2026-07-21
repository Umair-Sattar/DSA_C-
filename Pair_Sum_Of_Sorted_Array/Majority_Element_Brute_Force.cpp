#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,1,1,2};
	for(int i=0;i<v.size();i++)
	{
		int count=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[i]==v[j])
			{
				count++;
			}
		}
		if(count>v.size()/2)
		{
			cout<<v[i];
			break;
		}
	}
}