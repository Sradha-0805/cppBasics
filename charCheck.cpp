#include<iostream>
using namespace std;
void charCheck(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        cout << "It is a character" << endl;
    }
    else
    {
        cout << "It is not a character" << endl;
    }
}
int main()
{
  char ch;  
  cout << "Enter a character"<< endl;
  cin >> ch;
  charCheck(ch);
  return 0;

}