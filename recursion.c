/*write a c-programme to the recursion of number*/
#include<stdio.h>
int fact(int);
int main()
{
   int n;
   printf("\n Enter any +ve number is");
   scanf("%d",&n);
   printf("\n factorial is %d",fact(n));	
}
int fact(int x)
{
	if(x==1)
	return 1;
	else
	return x *fact(x-1);
}
