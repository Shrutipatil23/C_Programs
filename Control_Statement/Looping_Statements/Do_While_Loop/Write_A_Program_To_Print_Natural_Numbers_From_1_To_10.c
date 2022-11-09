#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    
    printf("\nNATURAL NUMBERS FROM 1 TO 10 ARE AS FOLLOWS : ");
    num=1;
    do
    {
       printf("\n%d",num);
       num++;
    } while (num<=10);
    
    return 0;
}