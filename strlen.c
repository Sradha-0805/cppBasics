//implementing the functionality of strlen() without using Header files.
#include<stdio.h>
int main()
{
    char arr[20] = "Programming";
    int i = 0;
    while(arr[i] != '\0')
       i++;
    printf("The length of %s is %d", arr, i);   
}
