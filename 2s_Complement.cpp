#include<iostream>
#include<cmath>
using namespace std;

int binaryAddition(int a,int b)
{
    int sum=0,pow=1,carry=0;
    bool isBinary=true;
    int tempA=a;
    int tempB=b;
    while(tempA>0 || tempB>0)
    {
        int remA=tempA%10;
        int remB=tempB%10;
        if(remA==0 || remA==1 && remB==0 || remB==1)
        {
            tempA=tempA/10;
            tempB=tempB/10;
        }
        else
        {
            isBinary=false;
            cout<<"Please enter valid binary numbers"<<endl;
            break;
        }
    }
    if(isBinary==true)
    {
        while(a>0 || b>0)
        {
            int remA=a%10;
            int remB=b%10;
            int rem=remA+remB+carry;
            if(rem==0|| rem==1)
            {
                sum=sum+rem*pow;
                carry=0;
            }
            else if(rem==2)
            {
                sum=sum+0*pow;
                carry=1;
            }
            else 
            {
                sum=sum+1*pow;
                carry=1;
            }
            a=a/10;
            b=b/10;
            pow=pow*10;
        }
    }
    
        if(carry==1)
        {
            sum=sum+carry*pow;
        }
        return sum;
}
int main()
{
	int decimal,binary=0,MSB=0,count=0;
	const int BIT_SIZE=8;
	int bits[BIT_SIZE]={0};
	bool isNeg=false;
	cout<<"Enter the decimal number:";
	cin>>decimal;
	if(decimal<0)
	{
		isNeg=true;
		MSB=1;
		decimal=abs(decimal);
	}
	for(int i=BIT_SIZE-1;i>=0;i--)
	{
		bits[i]=decimal%2;
		decimal=decimal/2;
	}
	if(isNeg==false)
	{
		for(int i=0;i<BIT_SIZE;i++)
		{
			cout<<bits[i];
		}
		cout<<endl;
	}
	else
	{
		for(int i=0;i<BIT_SIZE;i++)
		{
			bits[i]=1-bits[i];
		}
		cout<<"After 1's Complement:";
		int power=round(pow(10,7));
		for(int i=0;i<BIT_SIZE;i++)
		{
			cout<<bits[i];
			binary=binary+bits[i]*power;
			power/=10;
		}
		cout<<endl;
		cout<<"After 2's Complement:"<<binaryAddition(binary,1);
		//Final ANS
	}
}
