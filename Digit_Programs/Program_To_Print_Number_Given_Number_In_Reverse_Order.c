#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,rev=0;
    printf("\nENTER THE NUMBER TO GET ITS REVERSE ORDER : ");
    scanf("%d",&num);

    temp = num;

    while(temp > 0)
    {
        dig = temp % 10;
        rev = (rev * 10)+ dig;
        temp = temp / 10;
    }

    printf("\nORIGINAL NUMBER = %d",num);
    printf("\nREVERSE ORDER OF GIVEN NUMBER = %d",rev);
    return 0;
}