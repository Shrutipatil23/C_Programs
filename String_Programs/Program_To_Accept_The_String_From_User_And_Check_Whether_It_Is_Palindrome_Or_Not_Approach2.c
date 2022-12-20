#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'} , cDest[50] = {'\0'};
    int i=0, j=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }
    cDest[j] = '\0';

    for(i=0;i<j;i++)
    {
        if(cSrc[i] != cDest[i])
        {
            break;
        }
    }

    if(i==j)
    {
        printf("\nGIVEN STRING IS PALINDROME");
    }
    else
    {
        printf("\nGIVEN STRING IS NOT PALINDROME");
    }

    return 0;
}