#include <stdio.h>

int main(void) {
	// your code goes here
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	char ch;
	scanf("%c",&ch);
	int sum;
	if(ch=='+')
	{
		sum=num1+num2;
	}
	else if(ch=='-')
	{
		sum=num1-num2;
	}
	else if(ch=='/')
	{
		sum=num1/num2;
	}
	else if(ch=='*')
	{
		sum=num1*num2;
	}
	else
	{
		sum=(num1%num2);
	}
	printf("%d",sum);
	return 0;
}

