/*write a c-programme to print whether given number is poliderm number or not*/
#include<stdio.h>
int main()
{
	int num,rev,rem,temp;
	printf("enter any number is");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
		if(temp==rev)
		printf("\n the given number is a poliderm number%d",rev);
		else
		printf("the given number is not poliderm number%d",rev);
	
}
