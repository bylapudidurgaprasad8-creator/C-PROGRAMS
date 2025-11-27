/*write a c-programme to passsing to array of parameter of a function*/
add(int a[]);
int main()
{
	int arr[10],i;
	printf(" enter 10 integer numbers");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	add(arr);
}
add(int Y[10])
{
	int j,sum=0;
	for(j=0;j<10;j++)
	sum=sum+Y[j];
	printf("sum of an array is %d",sum);
}
