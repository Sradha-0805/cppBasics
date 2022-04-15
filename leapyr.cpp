#include<iostream>
using namespace std;
void leapYr(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout<<year<<" is a leap year"<<endl;
            }
            else
            {
                cout<<year<< " is not a leap year"<<endl;
            }
            

        }
        else
        {
            cout<<year<<" is a leap year"<<endl;
        }    
    }
    else
    {
        cout<<year<<" is not a leap year"<<endl;
    }
}
int main()
{
    int year, result;
    cout<<"Enter the year"<<endl;
    cin>>year;
    leapYr(year);
    return 0; 
}
