// Program to convert binary number to Decimal number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int num, rem, i = 0, result = 0;
    cout<<"Enter the binary number"<<endl;
    cin>>num;
    while(num != 0)
    {
       rem = num % 10;
       num = num/10;
       result += rem * pow(2, i);
       ++i;

    }
    cout<<result<<endl;

}
