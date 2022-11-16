#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,Cnt=0;

    printf("\nENTER ROW COUNT : ");
    scanf("%d",&Cnt);
 
    printf("\nPATTERN FOR X IS AS FOLLOWS : ");
    for(r=1;r<=Cnt;r++)
    {
        printf("\n\t\t\t");
        for(c=1;c<=Cnt;c++)
        {
            if(r==c || r+c==Cnt+1)
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