#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,ecnt=0;
    printf("\nENTER THE NUMBER TO GET COUNT OF EVEN DIGIT :");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        if(dig % 2 == 0)
        {
            ecnt++;
        }
        temp = temp / 10;
    }
    printf("\nTHERE ARE %d EVEN DIGITS IN GIVEN NUMBER %d",ecnt,num);
    return 0;
}