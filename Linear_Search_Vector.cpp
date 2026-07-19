#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec={1,2,3,4,5,6,7};
	int target=5;
	bool isfound=false;
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i]==target)
		{
			isfound=true;
			break;
		}
	}
	if(isfound)
	{
		cout<<"Target Achieved";
	}
}
