#include<iostream>
using namespace std;
int main()
{
	int size=7;
	int arr[7]={1,2,3,4,5,6,7};
	int sum=0,product=1;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
		product=product*arr[i];
	}
	cout<<"Sum of Elements of Array:"<<sum<<endl;
	cout<<"Product of Elements of Array:"<<product<<endl;
}
