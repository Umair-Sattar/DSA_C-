#include<iostream>
using namespace std;

void sumOfDigits(int x)
{
	int n,sum=0;
	while(x>0)
	{
		n=x%10;
		sum=sum+n;
		x=x/10;
	}	
	cout<<sum;
}

int main()
{
	sumOfDigits(1110);
}
