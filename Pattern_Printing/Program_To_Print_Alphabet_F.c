#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,Rcnt=0,Ccnt=0;
    printf("\nENTER ROW COUNT : ");
    scanf("%d",&Rcnt);
    printf("\nENTER COLUMN COUNT : ");
    scanf("%d",&Ccnt);

    printf("\nPATTERN FOR ALPHABET B IS AS FOLLOWS : ");
    
    for(r=1;r<=Rcnt;r++)
    {
        printf("\n\t\t\t");
        for(c=1;c<=Ccnt;c++)
        {
            if(c==1 || r==1 || r==(Rcnt + 1)/2)
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

    getch();
    return 0;
}