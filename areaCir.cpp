// program to find the area of a circle
#include<iostream>
#include<math.h>
using namespace std;
double area(double radius)
{
    double ar = M_PI * radius * radius; // M_PI gives the value of pi.
    return ar;
}
int main()
{ 
  double r, result;  
  cout<<"Enter the radius of the circle"<<endl;
  cin>>r;
  result = area(r);
  cout<< "The area of the circle is "<<result<<endl;
} 
