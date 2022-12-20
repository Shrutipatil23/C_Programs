#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50]={'\0'};
    int i=0,j=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i > j)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
        i--;
        j++;
    }

    if(i <= j)
    {
        printf("\nGIVEN STRING IS PALINDROME ");
    }
    else
    {
        printf("\nGIVEN STRING IS NOT PALINDROME  ");
    }

    return 0;
}