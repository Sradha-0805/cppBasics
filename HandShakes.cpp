// Program to calculate the handshake given by a student to n friends in the class
#include<iostream>
using namespace std;
int main()
{
    int n, result;
    cout<<"Enter n"<<endl;
    cin>>n;
    result = n * (n - 1)/2;
    cout<<"The number of handshakes are "<<result<<endl;
}
