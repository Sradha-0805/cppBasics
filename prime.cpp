// To check a number is prime or not
#include<iostream>
using namespace std;
void prime(int n)
{
    int count = 0;
    for(int i = 2; i <= n/2; i++)
    {
       if(n % 2 == 0)
       {
         count++;
         break;
       }
    }
    if(count == 0)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    prime(n);
}
