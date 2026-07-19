#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
	cout<<"Enter a number: ";
    cin>>x;
	int w=x,y=x;
	int count=0;
	while(w>0)
	{
		w=w/10;
		count++;
	}
	int armstrong=0;
	while(y>0)
	{
		int rem=y%10;
		armstrong=armstrong+round(pow(rem,count));
		y=y/10;
	}
	if(armstrong==x)
    {
        cout<<x<<" is an Armstrong number";
    }
    else
    {
        cout<<x<<" is not an Armstrong number";
    }
}