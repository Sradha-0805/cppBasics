//Program to find if a number is strong or not
#include<iostream>
using namespace std;
int fact(int f)
    {
        int fact = 1;
        for(int i = 1; i <=f; i++)
        {
            fact = fact*i;
        }
        return fact;

    }
int strong(int n)
{
    int sum = 0, rem;
    int temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum+= fact(rem);
        temp /= 10;
    }
    return sum;

}
int main()
{
    int n, result;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    result = strong(n);
    if(result == n)
    {
        cout<<n<<" is a strong number"<<endl;
    }
    else
    cout<<n<<" is not a strong number"<<endl;
}
