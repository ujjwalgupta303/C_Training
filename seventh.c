#include <stdio.h>
#include <string.h>
// #include<conio.h>

int main(void) 
{

	float temperature;    // in Celsius
	scanf("%f",&temperature);
	// to F
	float ans=temperature*(9/5)+32;
	printf("%f",ans);
   	return 0;

}

