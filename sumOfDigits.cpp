// Sum of digits of a number
#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    while(n!=0)
    {
      sum = sum + n % 10;
      n = n/10;
    }
    return sum;
}
int main()
{
  int n, result;
  cout<<"Enter the number"<<endl;
  cin>>n;
  result = sumOfDigits(n);
  cout<<"The sum of digits of a number is "<<result<<endl;
  return 0;
}
