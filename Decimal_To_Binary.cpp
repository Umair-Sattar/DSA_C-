#include<iostream>
using namespace std;
int main()
{
    int binary;
    cout<<"Enter a number in binary: ";
    cin>>binary;
    int decimal=0;
    int pow=1;
    while(binary>0)
    {
        int rem=binary%10;
        binary=binary/10;
        decimal=decimal+rem*pow;
        pow=pow*2;
    }
    cout<<"Decimal equivalent is: "<<decimal;
}