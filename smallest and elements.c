/*write a c-programme to find smallest and largest elements in an array*/
#include<stdio.h>
int main()
{
	int i,max,min,a[10],n;
	printf("\n Enter the size of an array");
	scanf("%d",&n);
	
	printf("\n Enter the Element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}

	printf("\n min and max elements are %d %d",min,max);

}
