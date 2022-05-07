//Program to print armstrong number in a particular range.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start, end, rem, count = 0, i, r, sum = 0, temp1, temp2 ;
    cout<<"Enter the starting value "<<endl;
    cin>>start;
    cout<<"Enter the ending value "<<endl;
    cin>>end;
    cout<<"The armstrong numbers within the range "<<start<<" and"<<end<<" are: ";
    for(i = start +1; i < end; i++)
    {
        temp1 = i;
        while(temp1 != 0)
        {
            
            rem = temp1 % 10;
            ++count; // give the length of the number
            temp1/= 10;  
        }
        //cout<<count<<endl;
        temp2 = i;
        int rem1;
        while(temp2 != 0)
        {
            
            rem1 = temp2 % 10;
            sum = sum + pow(rem1, count);
            temp2/= 10;
        }
        if(i == sum)
        {
            cout<<i<<" ";
        }
        count = 0;
        sum = 0;
        
    }
    }
