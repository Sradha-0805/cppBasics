//Program to find Harshad number.
#include<iostream>
using namespace std;
int HarshadNum(int n)
{
    int sum = 0, rem, temp;
    temp = n;
    while(n!=0)
    {
        rem = n%10;
        sum += rem;
        n/=10;
    }
    if(temp%sum == 0)
    {
        cout<<temp<<" is a Harshad number"<<endl;
    }
      else
      {
          cout<<temp<<" is not a Harshad number"<<endl;
    
      }
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    HarshadNum(n);
}
