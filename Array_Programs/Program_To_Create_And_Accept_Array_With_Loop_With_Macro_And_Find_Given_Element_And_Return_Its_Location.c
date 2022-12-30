#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int num[size]={0},i,search;

    for(i=0;i<size;i++)
    {
        printf("\nENTER %d ELEMENT = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nENTER THE ELEMENT TO CHECK WHETHER IT IS PRESENT IN GIVEN ARRAY OR NOT : ");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(search == num[i])
        {
            printf("\nGIVEN ELEMENT IS PRESENT AND FOUND AT LOCATION %d",i+1);
        }
    }

    getch();
    return 0;
}