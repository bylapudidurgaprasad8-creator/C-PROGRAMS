#include<stdio.h>
int fib(n);
int main()
{
	int i,n;
	printf("\n Enter the integer numbers is");
	scanf("%d",&n);
	
	printf("\n fibanocci number");
	for(i=0;i<n;i++)
	printf("%d",fib(i));
	return 0;
}
int fib(int x)
{
	if(x==0||x==1)
	   return x;
	   else
	   return fib(x-1)+fib(x-2);
}
