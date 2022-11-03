#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0,num2=0;
     up:
    printf("\nENTER FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("\nENTER SECOND NUMBER : ");
    scanf("%d",&num2);

    if(num1 == num2)
    {
        printf("\nBOTH NUMBERS ARE EQUAL...");
        printf("\nPLEASE ENTER TWO DIFFERENT NUMBERS...");
        goto up;
    }
    else if(num1 > num2)
    {
        printf("\nFIRST NUMBER IS GREATER...");
    }
    else
    {
        printf("\nSECOND NUMBER IS GREATER...");
    }
    
    return 0;
}