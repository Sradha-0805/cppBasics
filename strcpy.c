//implementing the functionality of strcpy() without using Header files.
#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "copy";
    char target[10] = "";
    int i = 0;
    while(source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
   target[i] = '\0';
    printf("%s", target);
      
    
}
