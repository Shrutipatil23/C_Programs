#include<stdio.h>
#include<conio.h>
int main()
{
    int fact=1,i,num;
    printf("\nENTER THE NUMBER TO GETS ITS FACTORIAL : ");
    scanf("%d",&num);
    i = 1;
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("\nFACTORIAL OF %d IS %d ",num,fact);
    return 0;
}

