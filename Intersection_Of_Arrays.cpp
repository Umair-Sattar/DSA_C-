#include<iostream>
using namespace std;
int main()
{
    int size=7;
	int arr[size]={1,2,3,4,5,6,7};
	int ARR[size]={7,8,9,10,11,12,1};
	int common[size];
	int n=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i]==ARR[j])
			{
                if(n==0)
                {
                    common[n]=arr[i];
                    n++;
                }
                else
                {
                bool isDuplicate=false;
                for(int k=0;k<n;k++)
                {
                    if(common[k]==arr[i])
                    {
                        isDuplicate=true;
                        break;
                    }
                }
                if(!isDuplicate)
                {
                    common[n]=arr[i];
                    n++;
                }
            }
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<common[i]<<" ";
	}
	cout<<endl;
	return 0;
}