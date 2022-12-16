#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,zcnt=0;
    printf("\nENTER THE NUMBER TO GET COUNT OF ZERO FROM GIVEN NUMBER :");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        if(dig == 0)
        {
            zcnt++;
        }
        temp = temp / 10;
    }
    printf("\nTHERE ARE %d ZERO IN GIVEN NUMBER %d",zcnt,num);
    return 0;
}