#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\nENTER THE NUMBER TO CHECK WHETHER IT IS POSITIVE ,NEGATIVE OR ZERO = ");
    scanf("%d",&num);

    switch(num > 0)
    {
        case 0:
        switch(num < 0)
        {
            case 0:
            printf("\nTHE NUMBER IS ZERO");
            break;
            case 1:
            printf("\nTHE NUMBER IS NEGATIVE");
            break;
        }
        break;
        case 1:
        printf("\nTHE NUMBER IS POSITIVE");
        break;
    }
    return 0;
}