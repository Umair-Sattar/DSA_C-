#include<iostream>
using namespace std;
int main()
{
	int size=7;
	int arr[size]={1,2,3,4,5,6,7};
	int unique[size];
	int n=0;
	for(int i=0;i<size;i++)
	{
		bool isDuplicate=false;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==unique[j])
			{
				isDuplicate=true;
				break;
			}
		}
		if(isDuplicate==false)
		{
			unique[n]=arr[i];
			n++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<unique[i]<<" ";
	}
	cout<<endl;
}
