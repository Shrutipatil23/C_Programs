#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,range=0;
    printf("\nENTER THE REQUIRED RANGE : ");
    scanf("%d",&range);
    printf("\nEVEN NUMBERS BETWEEN 1 TO %d IS AS FOLLOWS",range);

    for(num=2;num<=range;num+=2)             //num+=2(shorthand assignment operator) & num=num+2
    {
        printf("\n%d",num);
    }
    return 0;
}