#include <stdio.h>
#include <string.h>
// #include<conio.h>

int main(void) 
{
    int days;
    scanf("%d",&days);
    int months,weeks,years;
    
    years=days/365;
    weeks=days/7;
    months=days/30;
    printf("Years= %d\n",years);
    printf("Months= %d\n",months);
    printf("Weeks= %d\n",weeks);
   	return 0;

}

