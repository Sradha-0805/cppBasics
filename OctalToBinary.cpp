//Program to convert octal to binary
#include<iostream>
#include<math.h>
using namespace std;
int OctalToBinary(int n);
int OctalToDecimal(int n);
int OctalToBinary(int n)
{
   int decimal, rem1, i = 1, answer = 0;
   decimal = OctalToDecimal(n);
   while(decimal != 0)
   {
     rem1 = decimal % 2;
     decimal /= 2;
     answer += rem1 * i;
     i = i* 10;
   }
   return answer;

}
int OctalToDecimal(int n)
{
    int rem, i = 0, deci = 0;
    while(n != 0)
    {
        rem = n % 10;
        deci += rem * pow(8, i);
        ++i;
        n = n/10;
    }
    return deci;
    
}

int main()
{
    int n, r;   
    cout<<"Enter the octal number"<<endl;
    cin>>n;
    r = OctalToBinary(n);
    cout<<"The octal equvalent is "<<r<<endl;
}
