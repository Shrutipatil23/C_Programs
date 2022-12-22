#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'};
    int i=0,cnt=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            cnt++;
        }
        i++;
    }
    printf("\nTHERE ARE TOTAL %d DIGITS DETECTED IN GIVEN STRING ",cnt);
    return 0;
}