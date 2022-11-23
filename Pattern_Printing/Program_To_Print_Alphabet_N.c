#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;
    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&cnt);

    printf("\nPATTERN FOR N : ");
    for(r=1;r<=cnt;r++)
    {
        printf("\n\t\t");
        for(c=1;c<=cnt;c++)
        {
            if(c==1 || c==cnt || r==c)
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