//Program to convert binary number to correspounding octal number
#include<iostream>
#include<math.h>
using namespace std;
int BinaryToDecimal(int num);
int grouping(int n);
int grouping(int n)
{
    int octal = 0, r, i = 1, lastdigit;
   while(n != 0)
   {
       lastdigit = n % 1000;
       r = BinaryToDecimal(lastdigit);
       octal += r * i;
       i *= 10;
       n /= 1000;
   }
   return octal;
}
int BinaryToDecimal(int num)
{
    int i = 0, rem, decimal = 0;
    while(num != 0)
    {
        rem = num % 10;
        num = num/10;
        decimal += rem * pow(2, i);
        i++;
    }
    return decimal;
}
int main()
{
    int n, result;
    cout<<"Enter the  binary number"<<endl;
    cin>>n;
    result =  grouping(n);
    cout<<"The octal number of "<<n<<" is "<<result<<endl;
    
}
