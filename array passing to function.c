#include<stdio.h>
add(int a[]);
int main()
{
 int i,arr[10];
 printf("enter the size of an array");
 for(i=0;i<10;i++)
 scanf("%d",&arr[i]);
 add(arr);	
}
add(int y[10])
{
	int sum=0,j;
	for(j=0;j<10;j++)
	sum=sum+y[j];
	printf("sum of elements is %d",sum);
}
