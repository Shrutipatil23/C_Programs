#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'} , cDest[50] = {'\0'};
    int i;

    puts("\nENTER THE STRING : ");
    gets(cSrc);

    for(i=0;cSrc[i] != '\0';i++)
    {
        cDest[i] = cSrc[i];
    }

    printf("\nORIGINAL STRING = %s",cSrc);
    printf("\nCOPIED STRING : %s",cDest);

    return 0;
}