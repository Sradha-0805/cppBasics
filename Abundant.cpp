//Program to find Abundant number
#include<iostream>
using namespace std;
int Abundant(int n)
{
    int sum = 0, i, temp;
    temp = n;
    for(i = 1; i < n;i++)
    {
        if(n%i ==0)
        sum += i;
    }
    if(sum > temp)
    {
        cout<<"Abundant"<<endl;
    }
    else
    {
        cout<<"Not Abundant"<<endl;
    }
    
}
int main()
{
     int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    Abundant(n);
}
