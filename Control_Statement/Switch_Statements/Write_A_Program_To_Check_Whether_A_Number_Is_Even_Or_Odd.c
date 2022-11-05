#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\nENTER THE NUMBER TO CHECK WHETHER IT IS EVEN OR ODD : ");
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 0:
        printf("\nTHE NUMBER IS ODD");
        break;
        case 1:
        printf("\nTHE NUMBER IS EVEN");
        break;
    }
    return 0;
}