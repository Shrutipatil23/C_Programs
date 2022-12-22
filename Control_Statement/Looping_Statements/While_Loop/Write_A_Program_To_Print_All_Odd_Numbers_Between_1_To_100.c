#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("\nODD NUMBERS BETWEEN 1 TO 100 ARE AS FOLLOWS : ");

    i=1;
    while(i<=100)
    {
        printf("\n%d",i);
        i = i + 2;
    }
    return 0; 
}