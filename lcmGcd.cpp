//To find the lcm and gcd of two numbers
#include<iostream>
using namespace std;
void gcdLcm(int a, int b)
{ 
    int gcd, lcm;
    for(int i = 1; i<=a && i<=b; i++)
    {
        if(a % i == 0 && b % i == 0 )
        {
            gcd = i;
        }
    }
    lcm = (a * b)/gcd; // using the equation lcm * gcd = a * b
    cout<<"gcd is "<<gcd<<endl;
    cout<<"lcm is "<<lcm<<endl;
}
int main()
{
  int a, b;
  cout<<"Enter two numbers to find lcm and gcd"<<endl;
  cin>>a>>b;
  gcdLcm(a,b);
return 0;
}
