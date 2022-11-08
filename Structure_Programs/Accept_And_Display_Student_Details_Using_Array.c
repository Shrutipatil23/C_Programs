#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Stud_Details
{
    int R_no ;
    char S_Name[30] ;
    char Grade;
    float Percentage;
};
int main()
{
    struct Stud_Details obj[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nENTER STUDENT ROLL NO : ");
        scanf("%d",&obj[i].R_no);
        fflush(stdin);
        printf("\nENTER STUDENT NAME : ");
        gets(obj[i].S_Name);
        fflush(stdin);
        printf("\nENTER STUDENT GRADE : ");
        scanf("%c",&obj[i].Grade);
        printf("\nENTER PERCENTAGE : ");
        scanf("%f",&obj[i].Percentage);

    }
    printf("\n=============================THANK YOU=======================");
    _getch();
    system("cls");

    printf("\n=============================DISPLAY STUDENT DETAILS=====================");

    for(i=0;i<5;i++)
    {
        printf("\nSTUDENT ROLL NO : %d\n\nSTUDENT NAME : %s\n\nSTUDENT GRADE : %c\n\nPERCENTAGE : %O.2f",obj[i].R_no,obj[i].S_Name,obj[i].Grade,obj[i].Percentage);
    }

    printf("\n================================THANK YOU==============================");
    return 0;
}