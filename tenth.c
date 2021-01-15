#include <stdio.h>
#include <string.h>
// #include<conio.h>

int main(void) 
{
    int size;
    scanf("%d",&size);
    
    int i, j;

    for(i=1;i<=size;i++) 
    {
        for (j=i;j<size;j++)
        {
            printf(" ");
        }
        for (j=1;j<=size;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // rhombus


   //   *****
   //  *****
   // *****

    return 0;

}

