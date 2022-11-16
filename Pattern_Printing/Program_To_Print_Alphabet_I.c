#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,Cnt=0;

    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&Cnt);

    printf("\nPATTERN FOR I IS AS FOLLOWS : ");

    for(r=1;r<=Cnt;r++)
    {
        printf("\n\t\t\t");
        for (c=1;c<=Cnt;c++)
        {
            if(r==1 || r==Cnt || c==(Cnt+1)/2)
            {
                printf(" * ");
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