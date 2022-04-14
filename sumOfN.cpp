// sum of first n natural numbers
#include<iostream>
using namespace std;
int sumOfN(int n)
{
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum = sum +i;
    }
    return sum;
}
int main()
{
  int n, result;
  cout<<"Enter the value of N"<<endl;
  cin>>n;
  result = sumOfN(n);
  cout<<"Sum of first "<<n<<" natural numbers are "<<result<<endl;
  return 0;

}
