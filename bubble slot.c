/*write a c-programme to arrange the element in ascending order by using bubble slot*/
#include<stdio.h>
int main()
{
	int i,n,j,temp,a[10];
	printf("\n Enter the size of an array");
	scanf("%d",&n);
	
	printf("\n Enter the Element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted elements are");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
