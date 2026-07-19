#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int bitSize=0;
	cout<<"No of bits you want to enter:";
	cin>>bitSize;
	int bits[bitSize];
	int power=1,decimal=0;
	for(int i=0;i<bitSize;i++)
	{
		cout<<i+1<<"th bit:";
		cin>>bits[i];
	}
	for(int i=bitSize-1;i>0;i--)
	{
		decimal=decimal+bits[i]*power;
		power*=2;
	}
	bool isNeg=false;
	if(bits[0]==1)
	{
		isNeg=true;
		decimal=decimal-(bits[0]*power);
	}
	cout<<"Decimal Equivalence:"<<decimal;
}