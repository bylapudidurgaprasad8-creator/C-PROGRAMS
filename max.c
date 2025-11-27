/*write a c-programme to find maxmium of three integer numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter any three integer number");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("the valuesis %d",max);
}
