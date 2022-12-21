#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[7] = {0} ;

    printf("\nARRAY OF 7 ELEMENTS WITH NULL INITIALIZATION ARE AS FOLLOWS : ");

    for(int i=0; i < 7; i++)
    {
        printf("\nARRAY OF ELEMENT %d = %d",i+1,Arr[i]);
    }

    getch();
    return 0;
}