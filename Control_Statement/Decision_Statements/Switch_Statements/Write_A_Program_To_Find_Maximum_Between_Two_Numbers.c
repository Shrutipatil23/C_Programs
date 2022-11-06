#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=0 , num2=0;
    printf("\nENTER FIRST NUMBER : ");
    scanf("%d",&num1);
    printf("\nENTER SECOND NUMBER : ");
    scanf("%d",&num2);

    switch(num1>num2)
    {
        case 0:
        printf("\nSECOND NUMBER = %d IS MAXIMUM",num2);
        break;
        case 1:
        printf("\nFIRST NUMBER = %d IS MAXIMUM",num2);
        break;
        
    } 
    return 0;  
}