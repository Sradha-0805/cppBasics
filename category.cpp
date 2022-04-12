#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character"<<endl;
    cin >> ch;
    if(ch>=65 && ch<=90)
    {
        cout << "It is UpperCase"<<endl;
    }
    else if(ch>=97 && ch<=122)
    {
        cout<< "It is lowerCase"<<endl;
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"It is a number"<<endl;
    }
    else 
    {
        cout<<"It is a Special Character"<<endl;
    }
    return 0;
}