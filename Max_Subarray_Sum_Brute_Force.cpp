#include<iostream>
#include<climits>
using namespace std;
int main()
{
	const int size=7;
	int arr[size]={3,-4, 5, 4,-1, 7, 8};
	int maxSum=INT_MIN;
	for(int start=0;start<size;start++)
	{
		int currentSum=0;
		for(int end=start;end<size;end++)
		{
			currentSum+=arr[end];
			maxSum=max(currentSum,maxSum);
		}
	}
	cout<<"MAX Sub-Array Sum:"<<maxSum<<endl;
}
