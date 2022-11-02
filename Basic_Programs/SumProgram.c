#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0, n2=0 ,sum=0;
    printf("\nENTER FIRST NUMBER : ");
    scanf("%d",&n1);
    printf("\nENTER SECOND NUMBER : ");
    scanf("%d",&n2);
    sum = n1 + n2;
    printf("\n\nSUM OF %d AND %d = %d",n1,n2,sum);
    return 0;
}