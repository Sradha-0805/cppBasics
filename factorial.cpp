//Program to find factorial
#include<iostream>
using namespace std;
int factorial(int n)
{
    int i, fact = 1;
    if(n == 0)
    {
        return 1;
    }
    if(n > 0)
    {
       for(i = 1; i<=n; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
    
}
int main()
{
    int n, i, fact = 1, result;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>n;
    if(n < 0)
    {
        cout<<"Invalid number"<<endl;
    }
    else
    {
        result = factorial(n);
        cout<<"The factorial of "<<n<<" is "<<result<<endl;
    }

    return 0;  
}
