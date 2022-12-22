#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    printf("\nALL EVEN NUMBERS BETWEEN 1 TO 100 ARE AS FOLLOWS :");
    while(i<=100)
    {
       printf("\n%d",i);
       i = i + 2;
    }
    return 0;
}