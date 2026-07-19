#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int decimal;
    cout<<"Enter a number in decimal: ";
    cin>>decimal;
    int binary=0;
    int power=1;
    while(decimal>0)
    {
        int rem=decimal%2;
        decimal=decimal/2;
        binary=binary+rem*power;
        power=power*10;
    }
    cout<<"Binary equivalent is: "<<binary;
}