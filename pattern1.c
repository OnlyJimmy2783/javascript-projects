#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0,j=0;
    
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}