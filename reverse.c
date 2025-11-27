/*write a c-programme to print revrse to the given number using while*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter any numbers is");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		printf("\n revrse to the numberis%d",rev);
	}
}
