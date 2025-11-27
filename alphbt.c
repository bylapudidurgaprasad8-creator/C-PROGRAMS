/*write a c-prigramme to print the pattern*/
#include<stdio.h>
int main()
{
	int i,j,row;
	char ch;
	printf("enter any alphabet is");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{
		ch='A';
		for(j=0;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
