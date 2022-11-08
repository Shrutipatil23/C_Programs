#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\nEVEN NUMBERS BETWEEN 1 TO 100 ARE AS FOLLOWS : ");

    for(num=1;num<=100;num++)
    {
        if(num%2==0)
        {
            printf("\n%d",num);
        }
    }
    return 0;
}