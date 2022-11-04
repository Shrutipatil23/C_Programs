#include<stdio.h>
#include<conio.h>
int main()
{
    int month=0;
    printf("\nENTER MONTH NUMBER(1-12): ");
    scanf("%d",&month);

    switch(month)
   { 
        case 1:
        printf("\nMONTH NAME : JANUARY \nTOTAL NUMBER OF DAYS :31");
        break;
        case 2:
        printf("\nMONTH NAME : FERBUARY \nTOTAL NUMBER OF DAYS :28/29");
        break;
        case 3:
        printf("\nMONTH NAME : MARCH \nTOTAL NUMBER OF DAYS :31");
        break;
        case 4:
        printf("\nMONTH NAME : APRIL \nTOTAL NUMBER OF DAYS :3O");
        break;
        case 5:
        printf("\nMONTH NAME : MAY \nTOTAL NUMBER OF DAYS :31");
        break;
        case 6:
        printf("\nMONTH NAME : JUNE \nTOTAL NUMBER OF DAYS :30");
        break;
        case 7:
        printf("\nMONTH NAME : JULY \nTOTAL NUMBER OF DAYS :31");
        break;
        case 8:
        printf("\nMONTH NAME : AUGUST \nTOTAL NUMBER OF DAYS :31");
        break;
        case 9:
        printf("\nMONTH NAME : SEPTEMBER \nTOTAL NUMBER OF DAYS :30");
        break;
        case 10:
        printf("\nMONTH NAME : OCTOMBER \nTOTAL NUMBER OF DAYS :31");
        break;
        case 11:
        printf("\nMONTH NAME : NOVEMBER \nTOTAL NUMBER OF DAYS :30");
        break;
        case 12:
        printf("\nMONTH NAME : DECEMBER \nTOTAL NUMBER OF DAYS :31");
        break;
        default:
        printf("\nINVALID INPUT...");
        break;
   }
    return 0;
}