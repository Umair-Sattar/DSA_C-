#include<iostream>
using namespace std;
int main()
{
    int a=6,b=10;
    cout<<"Bitwise AND of a and b is: "<<(a&b)<<endl;
    cout<<"Bitwise OR of a and b is: "<<(a|b)<<endl;
    cout<<"Bitwise XOR of a and b is: "<<(a^b)<<endl;
    cout<<"Bitwise Left Shift of b is: "<<(b<<2)<<endl;
    cout<<"Bitwise Right Shift of b is: "<<(b>>1)<<endl;
    return 0;
}