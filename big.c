#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter the values is");
	scanf("%d %d %d",&a,&b,&c);
	big = (a>b)?(a>c?a:c):(b>c?b:c);
	printf("the big number is%d",big);
}
