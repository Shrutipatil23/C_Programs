#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,Ecnt=0,Ocnt=0,Zcnt=0;
    printf("\nENTER THE NUMBER TO KNOW HOW MANY ZERO,EVEN AND ODD DIGITS ARE THERE : ");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        if(dig == 0)
        {
            Zcnt++;
        }
        if(dig % 2 == 0)
        {
            Ecnt++;
        }
        if(dig % 2 == 1)
        {
            Ocnt++;
        }
        temp = temp / 10;
    }

    printf("\nTHERE ARE %d ZERO'S %d EVEN DIGITS AND %d ODD DIGITS IN GIVEN NUMBER ",Zcnt,Ecnt,Ocnt);
    return 0;
}