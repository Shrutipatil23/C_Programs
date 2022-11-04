#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\nENTER THE CHARACTER TO CHECK WHETHER IT IS VOWEL,CONSONANT OR DIGIT = ");
    scanf("%c",&ch);                                    //ch=getche();

    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\nENTERED CHARACTER IS VOWEL....");
        break;

        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H': 
        case 'K': 
        case 'L': 
        case 'M': 
        case 'N':  
        case 'P': 
        case 'Q': 
        case 'R': 
        case 'S': 
        case 'T': 
        case 'V': 
        case 'W': 
        case 'X': 
        case 'Y': 
        case 'Z': 
        case 'b': 
        case 'c': 
        case 'd': 
        case 'f': 
        case 'g': 
        case 'h': 
        case 'j': 
        case 'k': 
        case 'l': 
        case 'm': 
        case 'n': 
        case 'p': 
        case 'q': 
        case 'r': 
        case 's': 
        case 't': 
        case 'v': 
        case 'w': 
        case 'x': 
        case 'y': 
        case 'z': 
        printf("\nENTERED CHARACTER IS CONSONANT...");
        break;

        case '0': 
        case '1': 
        case '2': 
        case '3': 
        case '4': 
        case '5': 
        case '6': 
        case '7': 
        case '8':   
        case '9': 
        printf("\nENTERED CHARACTER IS DIGIT....");
        break;

        default:
        printf("\nSPECIAL CHARACTER...");
        break;
    }
        return 0;
}




