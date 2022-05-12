// Program to find whether a number can be expressed as a sum of two prime numbers.
#include<iostream>
using namespace std;
int checkPrime(int num)
{
    int count = 0, j;
    for(j = 2; j <= num/2; j++)
    {
        if(num % j == 0)
        {
            count++;
            break;
        }
        
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i = 2; i <= n/2; i++)
    {
        if(checkPrime(i)== 0 )
        {
            if(checkPrime(n-i) == 0 )
        {
            cout<<n<<" can be expressed as the sum of "<<i<<" and "<<n-i<<endl;
        }

        }
    
    }
}
