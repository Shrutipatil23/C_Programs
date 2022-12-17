#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp=0,dig=0,rev=0;
    printf("\nENTER THE NUMBER TO GET ITS REVERSE ORDER :");
    scanf("%d",&num);

    temp = num;

    if(num>0)
    {
        while(temp > 0)
        {
            dig = temp % 10;
            rev = (rev * 10) + dig;
            temp = temp / 10;
        }
    }
    else
    {
        while(temp < 0)
        {
            dig = temp % 10;
            rev = (rev * 10) + dig;
            temp = temp / 10;
        }
    }
    printf("\nREVERSE ORDER OF ENTERED NUMBER %d IS %d",num,rev);
    return 0;
}