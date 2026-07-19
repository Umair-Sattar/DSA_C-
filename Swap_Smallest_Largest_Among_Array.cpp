#include<iostream>
using namespace std;
int main()
{
	int size=7;
	int arr[7]={1,2,3,4,5,6,7};
	int smallest=INT_MAX,largest=INT_MIN;
	int smallIndex=0,largeIndex=0;
	cout<<"Before Swapping:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
		if(arr[i]<smallest)
		{
			smallest=arr[i];
			smallIndex=i;
		}
		if(arr[i]>largest)
		{
			largest=arr[i];
			largeIndex=i;
		}
	}
	cout<<endl;
	swap(arr[smallIndex],arr[largeIndex]);
	cout<<"After Swapping:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
