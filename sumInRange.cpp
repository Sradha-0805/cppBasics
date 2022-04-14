// To calculate the sum in a particular range
#include<iostream>
using namespace std;
int sumInRange(int start, int end)
{
    int sum = 0;
    for(int i = start; i<=end; i++)
    {
      sum = sum + i;
    }
    return sum;
}
 int main()
 {
   int start, end, result;
   cout<<"Enter the starting number"<<endl;
   cin>>start;
   cout<<"Enter the ending number"<<endl;
   cin>>end;
   result = sumInRange(start, end);
   cout<<"result is "<<result<<endl;
   return 0;
 }
