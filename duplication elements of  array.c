/*write a c-progrmme to find duplicate element of an array*/
#include<stdio.h>
int main()
{
	int n,i,j,a[10];
	printf("\n Enter the size of an element");
	scanf("%d",&n);
	
	printf("\n Enter the element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("duplication element are:");
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			printf("%d",a[i]);
			break;
		}
		}
	}
	return 0;
}
