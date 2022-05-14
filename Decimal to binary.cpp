//Program to convert Decimal to Binary.
#include<iostream>
using namespace std;
int main()
{
    int n, rem, i = 1;
    long int binary = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(n != 0)
    {
      rem = n % 2;
      n = n/2;
      binary = binary + rem * i;
      i = i * 10;
      
    }
    cout<<binary;
}
