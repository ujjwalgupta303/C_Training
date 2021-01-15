#include <stdio.h>
#include <string.h>
// #include<conio.h>

int main(void) 
{

	char s[1000];
	scanf("%s", s);
   	char revstring[1000];
   	int idx=strlen(s)-1;
   	for(int i=0;i<strlen(s);i++)
   	{
   	    revstring[i]=s[idx--];
   	}
   	printf("%s",revstring);
   	return 0;

}

