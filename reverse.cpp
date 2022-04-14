// program to find the reverse of a number
#include<iostream>
using namespace std;
int main()
{
    int n, rem, rev = 0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    cout<<"The reverse of the number "<<rev<<endl;
}
