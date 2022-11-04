#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;
    printf("\nENTER THE NUMBER TO CHECK WHETHER THE NUMBER IS EVEN OR ODD : ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("\nTHE NUMBER IS EVEN....");
    }
    else
    {
        printf("\nTHE NUMBER IS ODD....");
    }
    return 0; 
}