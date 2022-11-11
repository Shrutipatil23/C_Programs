#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\nENTER THE CHARACTER TO CHECK WHETHER IT IS IN LOWERCASE OR UPPERCASE :");
    ch = getche();

    if(ch >='a' && ch <='z')
    {
        printf("\nENTERED CHARACTER IS IN LOWERCASE..");
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("\nENTERED CHARACTER IS IN UPPERCASE..");
    }
    else
    {
        printf("\nINVALID CHARACTER...");
    }

    getch();
    return 0;
}