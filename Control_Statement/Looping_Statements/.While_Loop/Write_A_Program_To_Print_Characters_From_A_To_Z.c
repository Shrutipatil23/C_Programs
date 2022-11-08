#include<stdio.h>
#include<conio.h>
int main()
{
    char F_ch = 'A',L_ch = 'Z';
    printf("\nCHARACTERS FROM A TO Z ARE AS FOLLOWS : ");

    while(F_ch <= L_ch)
    {
        printf("\n%c",F_ch);
        F_ch++;
    }
    return 0;
}