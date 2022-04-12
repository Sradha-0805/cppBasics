#include<iostream>
using namespace std;
void checkChar(char ch)
{
    if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o'|| ch =='u'||ch == 'A' || ch =='E' || ch =='I' 
    || ch == 'O' || ch =='U')
    {
        cout<<"it is a Vowel"<<endl;
    }
    else
    cout<<"it is a Consonent"<<endl;
}
int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    checkChar(ch);
    return 0;
  
}
