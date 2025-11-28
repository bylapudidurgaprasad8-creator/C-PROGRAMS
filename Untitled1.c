/*write a c-programme to read and display the factorial*/
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("enter any number is");
	scanf("%d",&n);
	while(n>0)
	{
		fact=fact*n;
		n--;
		
	}
	printf("factorial is %d",fact);
	 
}
