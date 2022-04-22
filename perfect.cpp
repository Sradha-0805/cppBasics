//Program to find a perfect number

#include<iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
    {
        cout<<n<<" is a perfect number"<<endl;
    }
    else
{
    cout<<n<<" is not a perfect number"<<endl;
}
        
}
