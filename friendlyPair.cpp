// Program to check friendly pair or not (Amicable or not) 
#include<iostream>
using namespace std;
int main()
{
    int n1, n2, sum1 = 0, sum2 = 0, i;
    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    for(i = 1; i < n1; i++)
    {
        if(n1 % i == 0)
        {
            sum1 += i;
        }
    }
    for(i = 1; i < n2; i++)
    {
        if(n2 % i == 0)
        {
            sum2 += i;
        }
    }

    if((sum1/n1) == (sum2/n2))
    {
        cout<<"friendly pair"<<endl;
    } 
    else
    {
        cout<<"Not Friendly pair"<<endl;
    }


}
