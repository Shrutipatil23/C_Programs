#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0 , c=0 , Cnt=0;
    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&Cnt);

    printf("\nPATTERN FOR M IS AS F0LLOWS : ");
    for(r=1;r<=Cnt;r++)
    {
        printf("\n\t\t");
        for(c=1;c<=Cnt;c++)
        {
            if(c==1 || c==Cnt || (r==c && r+c<=(Cnt+1)) || (r+c==Cnt+1 && r<=c) )
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