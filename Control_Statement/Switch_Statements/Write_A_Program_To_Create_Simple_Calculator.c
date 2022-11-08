#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int num1=0 , num2=0;
    float result=0.0;
    char operator = '\0';

    printf("\nENTER YOUR FIRST NUMBER = ");
    scanf("%d",&num1);
    fflush(stdin);
    printf("\nENTER THE OPERATION [+ ,- ,* ,/ ] THAT HAS TO BE DONE = ");
    scanf("%c",&operator);
    fflush(stdin);
    printf("\nENTER YOUR SECOND NUMBER = ");
    scanf("%d",&num2);
   

    switch(operator)
    {
        case '+':
                result = num1 + num2;
                break;
        case '-':
                result = num1 - num2;
                break;
        case '*':
                result = num1 * num2;
                break;
        case '/':
                result = num1 / num2;
                break;

    }
    printf("\nRESULT = \n%d %c %d = %f ",num1,operator,num2,result);
    return 0;
}