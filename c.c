#include<stdio.h>
int main()
{
	float c,p,r,t,a;
	scanf("%f %f %f",&p,&r,&t);
	a=p*pow((1+r/100),t);
	c=a-p;
	printf("%2f",c);
	return 0;
}
