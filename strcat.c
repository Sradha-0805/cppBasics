//implementing the functionality of strcat() without using Header files.
#include<stdio.h>
int main()
{
    char s1[20] = "Hello ";
    char s2[20] = "Little";
    int i,j;
    
    for( i = 0; s1[i] != '\0'; ++i)
    {
        
    }
    for(j = 0; s2[j] != '\0'; ++i, ++j)
    {
        s1[i] = s2[j];
    }
    printf("%s", s1);
    
}
