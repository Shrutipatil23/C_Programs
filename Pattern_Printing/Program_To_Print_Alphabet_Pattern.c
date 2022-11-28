#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;
    char ch;
    printf("\nENTER THE ROW AND COLUMN COUNT : ");
    scanf("%d",&cnt);

    printf("\nPATTERN FOR PRINTING ALPHABETS : ");

    for(ch='A',r=1;r<=cnt;r++)
    {
        printf("\n\t\t\t");
        for(c=1;c<=cnt;c++)
        {
            if(c==1 || r==c || r==cnt || r>=c)
            {
                printf(" %c ",ch);
                ch++;  
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