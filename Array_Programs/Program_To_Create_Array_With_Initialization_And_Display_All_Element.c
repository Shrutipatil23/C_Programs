#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[5] = {23,21,6,4,13};

    printf("\nENTERED ARRAY IS AS FOLLOWS :");

    for(int i=0; i < 5; i++)
    {
        printf("\nARRAY OF ELEMENT %d = %d",i+1,Arr[i]);
    }
    
    getch();
    return 0;
}