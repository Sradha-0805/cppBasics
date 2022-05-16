//program to convert Decimal to octal
#include<iostream>
using namespace std;
int main()
{
    int n, rem, octal = 0, i = 1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem = n % 8;
        n = n/8;
        octal += rem*i;
        i = i * 10;
        
    }
    cout<<octal<<endl;
}
