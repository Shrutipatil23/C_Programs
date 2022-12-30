#include<stdio.h>
#include<conio.h>
#define cnt 5

int main()
{
    int num[cnt] = {0}, i ,search;

    for(i=0;i<cnt;i++)
    {
        printf("\nENTER ELEMENT %d = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n\nENTER ELEMENT FOR SERACHING : ");
    scanf("%d",&search);

    for(i=0;i<cnt;i++)
    {
        if(num[i]==search)
        {
            printf("\nGIVEN NUMBER IS FOUND AT INDEX %d ",i);
        }
    }

    getch();
    return 0;  
}