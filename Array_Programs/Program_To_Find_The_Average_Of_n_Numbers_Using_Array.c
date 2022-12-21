#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[10],i=0,n=0,sum=0;
    double Average;

    printf("\nENTER THE NUMBER OF ELEMENTS : ");
    scanf("%d",&n);

    for(i=0 ; i < n ;i++)
    {
        printf("\nELEMENT NUMBER %d = ",i+1);
        scanf("%d",&marks[i]);

        sum += marks[i];
    }

    Average = (double)sum / n;

    printf("\nAVERAGE OF n NUMBER = %.2lf",Average);
    getch();
    return 0;
}