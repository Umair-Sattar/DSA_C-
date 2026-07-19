#include<iostream>
using namespace std;
int main()
{
	int n=4;
	for(int i=0;i<n;i++)
	{
		for(int l=0;l<n-i-1;l++)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				cout<<"*";
			}else{
			if((i+j)%2!=0)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			}
		}
		cout<<endl;
	}
	return 0;
}
