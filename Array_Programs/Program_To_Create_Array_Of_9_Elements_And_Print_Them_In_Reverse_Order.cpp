#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[9] = {23,28,24,99,13,50,84,95,33}, i=0;

    printf("\nTHE ARRAY ELEMENTS ARE AS FOLLOW :");
    for(i=0 ;i<9 ;i++)
    {
        printf(" %d ",Arr[i]);
    }

    printf("\n\nTHE ARRAY ELEMENTS IN REVERSE ORDER : ");
    for(i=8 ;i>=0 ;i--)
    {
        printf(" %d ",Arr[i]);
    }

    return 0;
}