#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int num1=0,num2=0,add=0,sub=0,prod=0;
    float div=0.0,rem=0.0;
    printf("\nENTER FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("\nENTER SECOND NUMBER : ");
    scanf("%d",&num2);
    add  = num1 + num2;
    sub  = num1 - num2;
    prod = num1 * num2;
    div  = num1 / num2;
    rem  = num1 % num2;
    system("cls");
    printf("\n\n--------------------CALCULATOR--------------------\n\n");
    printf("\nADDITION OF %d & %d      = %d",num1,num2,add);
    printf("\nSUBSTRACTION OF %d & %d  = %d",num1,num2,sub);
    printf("\nPRODUCT OF %d & %d       = %d",num1,num2,prod);
    printf("\nDIVISION OF %d & %d      = %f",num1,num2,div);
    printf("\nREMAINDER OF %d & %d     = %f",num1,num2,rem);  
    printf("\n\n--------------------THANK YOU--------------------\n\n");

    return 0;
}