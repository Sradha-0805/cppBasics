#include<iostream>
using namespace std;
int main()
{
    int n, count = 0, i;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"The factors of "<<n<<" are : ";
    for( i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count ++;
            cout<<i<<" ";
        }
    }
    cout<<endl<<"The total number of facors are "<<count<<endl;

}
