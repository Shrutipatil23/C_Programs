#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,ocnt=0;
    printf("\nENTER THE NUMBER TO GET COUNT OF ODD DIGIT :");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        if(dig % 2 == 1)
        {
            ocnt++;
        }
        temp = temp / 10;
    }
    printf("\nTHERE ARE %d ODD DIGITS IN GIVEN NUMBER %d",ocnt,num);
    return 0;
}