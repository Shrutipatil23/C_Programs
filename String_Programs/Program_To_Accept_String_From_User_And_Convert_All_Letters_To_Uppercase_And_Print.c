#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'};
    int i=0;

    puts("\nENTER THE STRING TO CONVERT IT INTO UPPERCASE :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            cSrc[i] = cSrc[i] - 32;
        }
        i++;
    }
    printf("\nTHE CONVERTED STRING = %s",cSrc);
    return 0;
}