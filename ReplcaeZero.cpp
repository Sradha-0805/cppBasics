//Program to replace zero to one in a given integer.
#include<iostream>
using namespace std;
int Replace(int n);
int convert(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return Replace(n);
    }     
}
int Replace(int n)
{
    int rem;
    if(n == 0)
    {
        return 0;
    }
    rem = n % 10;
    if(rem == 0)
    {
        rem = 1;
    }
    return Replace(n/10) * 10 + rem;       
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The converted number is "<<convert(n)<<endl;
}
