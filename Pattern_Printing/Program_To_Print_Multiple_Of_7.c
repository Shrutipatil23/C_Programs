#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,num=0;
    printf("\nMULTIPLE OF 7 IS AS FOLLOWS : ");

    for(num=1,r=1;r<=5;r++)
    {
        printf("\n\t\t");
        for(c=1;c<=5;c++)
        {
            if(c==1 || r==5 || r>=c || r==c)
            {
                printf(" %d ",num*7);
                num++;
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