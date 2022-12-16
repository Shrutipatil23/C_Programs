#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0 , dig=0 , temp=0 , dsum=0;
    printf("\nENTER ANY NUMBER TO FIND THE SUM OF ITS DIGIT: ");
    scanf("%d",&num);

    temp = num;

    while(temp>0)
    {
        dig = temp % 10;
        dsum = dsum + dig;
        temp = temp / 10;
    }

    printf("\nSUM OF ENTERED NUMBER %d IS %d",num,dsum);
    return 0;
}


