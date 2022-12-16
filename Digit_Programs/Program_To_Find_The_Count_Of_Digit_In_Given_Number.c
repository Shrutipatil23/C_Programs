#include<stdio.h>
#include<conio.h>
int main()
{
    long long num=0,temp=0;
    int dig=0,dcnt=0;
    printf("\nENTER THE INTEGER TO GET ITS DIGIT COUNT : ");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        dcnt++;
        temp = temp / 10;
    }
    printf("\nTHERE ARE %d DIGITS IN ENTERED NUMBER  %d",dcnt,num);
    return 0;
    
}