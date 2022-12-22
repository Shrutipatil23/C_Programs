#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'};
    int length=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    length = strlen(cSrc);

    printf("\nTHE LENGTH OF GIVEN STRING = %d",length);
    return 0;
    
}