/*write a c-programme to print the given number is prime or not*/
#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter any value is");
	scanf("%d",&num);
	for(i;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	printf("\n the given number is prime is %d",num);
	else
	printf("\n the given number is non-prime %d",num);
}
