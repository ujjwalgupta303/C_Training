#include <stdio.h>
#include <string.h>
// #include<conio.h>
int base=1;
int ans=0;
int findReverse(int num)
{
    
    if(num<=0)   
    return ans;

    findReverse(num/10); 
    ans+=(num%10)*base; 
    base*=10;
    return ans;
}

int main(void) 
{
    int num;
    scanf("%d",&num);
    int revNum=findReverse(num);
    printf("%d",revNum);
   	return 0;

}

