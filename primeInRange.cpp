//Prime numbers within a given range
#include<iostream>
using namespace std;
int main()
{
    int start, end, i, j, flag;
    cout<<"Enter the starting range"<<endl;
    cin>>start;
    cout<<"Enter the ending range"<<endl;
    cin>>end;
    cout<<"The prime numbers between the range "<<start<<" and "<<end<<" are: ";
    for(i = start; i <= end; i++)
    {
        if(i == 0 || i == 1)
        {
          continue;
        }
        flag = 1;
        for(j = 2; j < i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
          cout<<i<<" ";
        }
        
    }

}
