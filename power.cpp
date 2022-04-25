//Program to find power of a number using while loop
#include<iostream>
using namespace std;
int main()
{
    int base, exponent;
    long int result = 1;
    cout<<"Enter the base value"<<endl;
    cin>>base;
    cout<<"Enter the exponent value"<<endl;
    cin>>exponent;
    while(exponent != 0)
    {
      result = result * base;
      --exponent;
      
    }
    cout<<result<<endl;
}
