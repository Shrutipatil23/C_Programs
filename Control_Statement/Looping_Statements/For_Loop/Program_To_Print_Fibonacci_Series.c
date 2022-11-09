#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,c,num;

    printf("\nENTER THE RANGE : ");
    scanf("%d",&num);

    printf("\nFIBONACCI SERIES IS AS FOLLOWS : ");

    a = 0;
    b = 1;
    c = 0;

    for(i=1;i<=num;i++)
    {
        printf("\n%d",c);
        a = b;
        b = c;
        c = a + b;
    }
    
    return 0;
}