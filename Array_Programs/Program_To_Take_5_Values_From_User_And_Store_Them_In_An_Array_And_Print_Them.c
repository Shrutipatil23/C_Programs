#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Arr[5];

    printf("\nENTER THE VALUES :");

    for(int i=0;i < 5;i++)
    {
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

    printf("\nTHE VALUES ENTERED BY USER IS AS FOLLOW :");
    for(int i=0;i < 5;i++)
    {
        printf("\n%d",Arr[i]);
    }

    getch();
    return 0;
}