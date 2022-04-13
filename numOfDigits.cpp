//To find the number of digits in a number
#include<iostream>
using namespace std;
int numOfDigits(int n)
{
    int count = 0;
    while(n!= 0)
    {
        n = n/10;
        ++count;
    }
    return count;
}
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int result = numOfDigits(n);
  cout<<"The number of digits in "<<n<<" is "<<result<<endl;
  return 0;
}
