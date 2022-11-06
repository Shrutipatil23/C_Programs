#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;
    printf("\nENTER WEEK NUMBER (1-7) : ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        {
            printf("\nMONDAY");
            break;
        }
        case 2:
        {
           printf("\nTUESDAY");
           break; 
        }
        case 3:
        {
            printf("\nWEDNESDAY"); 
            break;
        }
        case 4:
        {
            printf("\nTHUSRDAY");
            break; 
        }
        case 5:
        {
            printf("\nFRIDAY");
            break;
        }
        case 6:
        {
            printf("\nSATURDAY"); 
            break;
        }
        case 7:
        {
            printf("\nSUNDAY");
            break;
        }
        default:
        {
            printf("\nINVALID INPUT...");
            break;
        }

        return 0;
    }
}