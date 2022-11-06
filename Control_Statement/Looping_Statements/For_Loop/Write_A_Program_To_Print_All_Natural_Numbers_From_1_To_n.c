#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, count=0;
    printf("\nENTER THE COUNT : ");
    scanf("%d",&count);

    printf("\nNATURAL NUMBERS FROM 1 TO %d IS AS FOLLOWS :\n",count);

    for(i=1;i<=count;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}