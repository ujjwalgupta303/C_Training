#include <stdio.h>

int checkEven(int num)
{
	return (num%2)==0;
}

int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	if(checkEven(num))
	{
		printf("Its a even");
	}
	else
	{
		printf("Its a odd");
	}
	return 0;

}

