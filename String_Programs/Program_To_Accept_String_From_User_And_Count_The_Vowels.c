#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char cSrc[50] = {'\0'};
    int i=0 , cnt=0;

    puts("\nENTER THE STRING :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U')
        {
            cnt++;
        }
        i++;
    }
    printf("\nTHERE ARE TOTAK %d VOWELS DETECTED IN GIVEN STRING ",cnt);
    return 0;
}