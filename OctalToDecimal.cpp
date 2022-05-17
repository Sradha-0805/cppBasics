//octal to decimal conversion
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, rem, result = 0, i = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem = n % 10;
        n = n/10;
        result += rem * pow(8,i);
        i++;
    }
    cout<<"decimal equvalent is"<<result<<endl;
    
    
}
