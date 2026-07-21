#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,1,1,2};
	int m=0;
	while(true)
	{
		int target=v[m];
		int count=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]==target)
			{
				count++;
			}
			if(count>v.size()/2)
			{
				cout<<v[i];
                break;
			}
		}
		m++;		
	}
}