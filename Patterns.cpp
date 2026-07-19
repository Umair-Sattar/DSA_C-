#include<iostream>
using namespace std;
int main()
{
    int n=3;
    char x='A';
    for(int i=(int)x;i<x+n;i++)
    {
        for(int j=i;j>=(char)(x);j--)
        {  
            cout<<(char)j<<" ";
             
        }
        cout<<endl;
    }
    return 0;
}