#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct product
{
    int P_id;
    char Pname[20];
    float P_price;
    float P_quantity;
};
int main()
{
    struct product obj1,obj2;
    obj1.P_id = 236;
    strcpy(obj1.Pname, "Maggie");
    obj1.P_price = 5.0;
    obj1.P_quantity = 2.0;
    printf("\n------------------FIRST PRODUCT DETAILS------------------\n");
    printf("nENTER PRODUCT ID : ");
    scanf("%d",&obj2.P_id);
    fflush(stdin);
    printf("\nENTER PRODUCT NAME : ");
    gets(obj2.Pname);
    fflush(stdin);
    printf("\nENTER PRODUCT PRICE : ");
    scanf("%f",&obj2.P_price);
    printf("\nENTER PRODUCT QUANTITY : ");
    scanf("%f",&obj2.P_quantity);
    printf("\n------------------THANK YOU------------------\n");
   
    getch();
    system("cls");

    printf("\n---------------------------------PRODUCT DETAILS OF FIRST PRODUCT-------------------------------\n");
    printf("\nENTER PRODUCT ID : %d,\n\n ENTER PRODUCT NAME : %s,\n\nENTER PRODUCT PRICE : %0.2f,\n\nENTER PRODUCT QUANTITY : %0.2f",obj1.P_id,obj1.Pname,obj1.P_price,obj1.P_quantity);
    
    printf("\n---------------------------------PRODUCT DETAILS OF SECOND PRODUCT-------------------------------\n");
    printf("\n\nENTER PRODUCT ID : %d,\n\nENTER PRODUCT NAME : %s,\n\nENTER PRODUCT PRICE : %0.2f,\n\nENTER PRODUCT QUANTITY : %0.2f",obj2.P_id,obj2.Pname,obj2.P_price,obj2.P_quantity);
    printf("\n-------------------------------------------------------------------------------\n");

    return 0;
}
