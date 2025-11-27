/*write a c-programme to print sumof number*/
#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("enter the any number is");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		printf("\nthe sumof number is %d",sum);
	}
}
