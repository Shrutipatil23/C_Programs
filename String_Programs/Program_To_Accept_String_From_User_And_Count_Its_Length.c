#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'};
    int i=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    printf("\nTHE LENGTH OF GIVEN STRING = %d ",i);
    return 0;
}