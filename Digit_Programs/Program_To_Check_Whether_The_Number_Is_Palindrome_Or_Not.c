#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,rev=0;
    printf("\nENTER THE NUMBER TO CHECK WHETHER IT IS PALINDROME OR NOT :");
    scanf("%d",&num);

    temp = num;

    while(temp > 0)
    {
        dig = temp % 10;
        rev = (rev * 10) + dig;
        temp = temp / 10;
    }
    if(num == rev)
    {
        printf("\nENTERED NUMBER IS PALINDROME!!!");
    }
    else
    {
        printf("\nENTERED NUMBER IS NOT PALINDROME!!!");
    }

    return 0;
}