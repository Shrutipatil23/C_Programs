#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50] = {'\0'};
    
    puts("\nENTER THE STRING :");
    gets(str);

    strrev(str);

    printf("\nREVERSED STRING = %s",str);

    return 0;

}