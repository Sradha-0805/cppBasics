#include<iostream>
using namespace std;
int checkPrime(int n)
{
    int j, flag1 = 1;
    for(j = 2; j <= n/2; j++)
    {
        if(n % j == 0)
        {
            flag1 = 0;
            break;
        }
    }
    return flag1;
}
int main()
{
    int n, i;
    int flag = 0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i = 2; i <= n/2; i++)
    {
         if(checkPrime(i) == 1)
         {
             if(checkPrime(n - i) == 1)
             {
                 cout<<n<<" can be expressed as the sum of "<<i<<" and "<<(n-i)<<endl;
                flag = 1;
             }
         }
    }
    if(flag == 0)
    {
        cout<<n<<" cannot be expresed as the sum of two prime numbers"<<endl;
    }
}
