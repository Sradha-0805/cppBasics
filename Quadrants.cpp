//Program to calculate in which quadrant a point lie.
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;
    if(x > 0 && y > 0)
    {
        cout<<"I quadrant"<<endl;
    }
    else if(x < 0 && y > 0)
    {
        cout<<"II quadrant"<<endl;
    }
    else if(x < 0 && y < 0)
    {
        cout<<"III quadrant"<<endl;
    }
    else if(x > 0 && y < 0)
    {
        cout<<"IV quadrant"<<endl;
    }
}
