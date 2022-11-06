#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,count=0;
    printf("\nENTER THE COUNT : ");
    scanf("%d",&count);

    printf("\nNATURAL NUMBERS FROM 1 TO %d IN REVERSE ORDER IS AS FOLLOWS :\n",count);

    for(i=count;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}