/*write a c-programme to pattern*/
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter any number is");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=i;j++)
		{
		printf("%d",j);
	}
	printf("\n");
}
}
