#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;
    char ch='\0';

    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&cnt);

    printf("\nCOLUMN WISE APLHABET PATTERN IS AS FOLLOW : ");

    for(ch='A',r=1;r<=cnt;r++)
    {
        printf("\n\t\t\t");
        for(c=1;c<=cnt;c++)
        {
            if(c==1 || r==cnt || r==c || r>=c)
            {
                printf(" %c ",ch);
            }
            else
            {
                printf("   ");
            }
        }
        ch++;
        printf("\n");
    }
    return 0;
}