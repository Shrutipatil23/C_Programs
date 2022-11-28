#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0,dig;
    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&cnt);

    printf("\nPATTERN FOR DIGITS ARE AS FOLLOWS : ");

    for(dig=1,r=1;r<=cnt;r++)
    {
        printf("\n\t\t");
        for(c=1;c<=cnt;c++)
        {
            if(c==1 || r==c || r==cnt || r>=c)
            {
                printf(" %d ",dig);
                dig++;
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