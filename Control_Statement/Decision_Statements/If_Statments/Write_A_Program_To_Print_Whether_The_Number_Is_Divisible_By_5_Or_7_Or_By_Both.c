#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;

    printf("\nENTER THE NUMBER : ");
    scanf("%d",&num);

    if(num%5==0 && num%7==0)
    {
        printf("\nENTERED NUMBER IS DIVISIBLE BY BOTH 5 AND 7");
    }
    else if(num%5==0)
    {
        printf("\nENTERED NUMBER IS DIVISIBLE BY 5 ONLY");
    }
    else if(num%7==0)
    {
        printf("\nENTERED NUMBER IS DIVISIBLE BY 7 ONLY");
    }
    else
    {
        printf("\nENTERED NUMBER IS NOT DIVISIBLE BY BOTH 5 AND 7");
    }

    getch();
    return 0;
}