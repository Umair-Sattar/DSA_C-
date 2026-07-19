#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a,b,sum=0,pow=1,carry=0;
    cout<<"Enter first binary numbers:";
    cin>>a;
    cout<<"Enter second binary numbers:";
    cin>>b;
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
            cout<<"Please enter valid binary numbers";
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
        cout<<"Sum of two binary numbers is:"<<sum;
}