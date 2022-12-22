#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Arr[5] ,i;

    printf("\nENTER THE ARRAY ELEMENT :");

    for(int i=0; i < 5; i++)
    {
        printf("\nVALUE OF ELEMENT %d = ",i+1);
        scanf("%d",&Arr[i]);
    }
    system("cls");
    printf("\nARRAY ELEMENT ARE AS FOLLOWS :");

    for(int i=0; i < 5; i++)
    {
        printf("\nARRAY ELEMENT OF %d = %d",i+1,Arr[i]);
    }

    getch();
    return 0;
}