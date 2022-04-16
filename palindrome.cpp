// To check a number is Palindrome or Not 
#include<iostream>
using namespace std;
void palindrome(int n)
{
    int rem, rev = 0, num;
    num = n;
    while(n != 0)
        {
            rem = n % 10;
            rev = (rev * 10) + rem;
            n = n/10;
        }
    
    if(num == rev)
        {
            cout<<"Palindrome"<<endl;
        }
    else
        {
            cout<<"Not Palindrome"<<endl;
        }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    palindrome(n);
}
