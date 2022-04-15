//Program to find fibonacci series 
#include<iostream>
using namespace std;
int fibonacci(int n)
{
  int a = 0, b = 1, sum = 0;
  while(sum <= n)
  {
    cout<<sum<<" ";
    a = b;
    b = sum;
    sum = a + b;
  }
  
}
int main()
{
 int n, result;
 cout<<"Enter the value up to which fibonacci series have to find "<<endl;
 cin>>n;
 fibonacci(n);
}
