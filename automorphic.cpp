//Automorphic number is a number in which the last digits of the square of that
// number is same as the number itself.
//eg: 76^2 = 5776 Here 5776 ends with the number 76 itself.

#include<iostream>
using namespace std;
bool automorphic(int n)
{
    int sq = n * n;
    while(n > 0)
    {
        if(n % 10 != sq %10)
        return false;
        n = n/10;
        sq = sq/10;
    }
    return true;
}
int main()
{
    int n, result;
    cout<<"Enter the number"<<endl;
    cin>>n;
   automorphic(n) ? cout<<"Automorphic"<<endl:cout<<"Not Automorphic"<<endl;
}
