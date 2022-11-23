#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;
    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&cnt);

    printf("\nPATTERN FOR P IS AS FOLLOWS : ");
    for(r=1;r<=cnt;r++)
    {
        printf("\n\t\t");
        for(c=1;c<=cnt;c++)
        {
            if(c==1 || r==1 || r==(cnt+1)/2 ||(c==cnt && r<=(cnt+1)/2))
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