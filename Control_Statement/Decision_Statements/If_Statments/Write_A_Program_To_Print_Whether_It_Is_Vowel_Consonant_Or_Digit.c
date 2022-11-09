#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';

    printf("\nENTER THE CHARACTER : ");
    ch = getche();
    getch();

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\nENTERED CHARACTER IS VOWEL...");
    }
    else if((ch>'A' && ch<'Z') || (ch>='a' && ch<='z'))
    {
        printf("\nENTERED CHARACTER IS CONSONANT...");
    }
    else if(ch>'0' && ch<'9')
    {
        printf("\nENTERED CHARACTER IS DIGIT...");
    }
    else
    {
        printf("\nSPECIAL SYMBOL...");
    }

    getch();
    return 0;

}