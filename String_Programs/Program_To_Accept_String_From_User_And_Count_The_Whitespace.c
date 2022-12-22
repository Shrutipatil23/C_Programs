#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50]={'\0'};
    int i=0 ,cnt=0;

    puts("\nENTER THE STRING : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            cnt++;
        }
        i++;
    }
    printf("\nTHERE ARE TOTAL %d WHITESPACES DETECTED IN GIVEN STRING ",cnt);
    return 0;
}