#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0 ,c=0 ,num1=0 ,num2=1 ,num3=0 ,a=0;
    printf("\nENTER THE NUMBER OF ELEMENT : ");
    scanf("%d",&a);

    printf("\nFIBONACCI SERIES IS AS FOLLOWS : ");
    printf("\n\t%d\n\n\t%d",num1,num2);
    for(r=1;r<=a;r++)
    {
        printf("\n\t");
        for(c=1;c<=a;c++)
        {
            if(r==5 || c==1 || r==c || r>=c)
            {
                num3 = num1 + num2 ;
                printf(" %d ",num3);
                num2 = num3;
                num1 = num2;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}