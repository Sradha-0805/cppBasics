#include<iostream>
#include<cmath>
using namespace std;
void armstrong(int n)
{
  int count = 0, rem, remainder, sum = 0;
  int number = n;
  int temp = n;
  while(n != 0)// for calculating the length of the number
    {
        rem = n % 10;
        ++count;
        n = n/10;   
    }
  
  
  while(number!= 0) // To extract each number and finding sum of powers of each digit raise to length of the number
    {
        remainder = number % 10;
        sum = sum + pow(remainder, count);
        number = number/10;
    }
if(temp == sum)
    {
        cout<<temp<<" is an armstrong number"<<endl;
    }
else
    {
        cout<<temp<<" is not an armstrong number";
    }  
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    armstrong(n);
}
