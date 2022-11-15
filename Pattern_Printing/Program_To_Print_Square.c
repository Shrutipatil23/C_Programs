#include<stdio.h>
#include<conio.h>
int main()
{
    int r = 0 , c = 0 , Rcnt = 0 , Ccnt = 0;

    printf("\nENTER ROW COUNT : ");
    scanf("%d",&Rcnt);
    printf("\nENTER COLUMN COUNT : ");
    scanf("%d",&Ccnt);

    printf("\nSQUARE PATTERN IS AS FOLLOWS :\n ");
    
    for(r=1 ; r<= Rcnt ; r++)
    {
        printf("\t\t\t");
        for(c=1 ; c<= Ccnt ; c++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}