#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\nENTER THE NUMBER TO CHECK WHETHER IT IS POSITIVE OR NEGATIVE : ");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("\nTHE NUMBER IS POSITIVE...");
    }
    else
    {
        printf("\nTHE NUMBER IS NEGATIVE...");
    }

    return 0;
}