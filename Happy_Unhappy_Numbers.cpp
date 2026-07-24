#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int temp=n;
	if(n<=0)
	{
		cout<<temp<<" is Unhappy Number";
	}
	while(true)
	{
		int ans=0;
		while(n>0)
		{
			int rem=n%10;
			ans=ans+(rem*rem);
			n/=10;
		}
		if(ans==1)
		{
			cout<<temp<<" is Happy Number";
			break;
		}
		else if(ans==4)
		{
			cout<<temp<<" is Unhappy Number";
			break;
		}
		else
		{
			n=ans;
		}
	}
	return 0;
}