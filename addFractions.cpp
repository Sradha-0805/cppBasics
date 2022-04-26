#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, gcd, nr, dr;
   cout<<"Enter the first number numerator"<<endl;
   cin>>a;
   cout<<"Enter the first number denominator"<<endl;
   cin>>b;
cout<<"Enter the second number numerator"<<endl;
cin>>c;
cout<<"Enter the second number denominator"<<endl;
cin>>d;
nr = (a * d) + (b * c);
dr = b * d;
for(int i = 1; i <=nr && i <=dr; i++)
{
    if((nr % i == 0) && (dr % i == 0))
    {
        gcd = i;
    }
}
    cout<<"The added fraction is "<<nr/gcd<<"/"<<dr/gcd<<endl;
}
