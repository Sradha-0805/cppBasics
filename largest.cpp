//Program to check largest among three numbers
#include<iostream>
using namespace std;
int largest(int a, int b, int c)
{
    if((a>b) && (a>c))
    {
        cout<<a<<" is largest"<<endl;
    }
    else if(b>c)
    {
        cout<<b<<" is largest"<<endl;
    }
    else
    {
        cout<<c<<" is largest"<<endl;
    }
}   
int main()
{
  int a, b, c;
  cout<<"Enter the three numbers"<<endl;
  cin>>a>>b>>c;
  largest(a, b, c);
  return 0;

}
