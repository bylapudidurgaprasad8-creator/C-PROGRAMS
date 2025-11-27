/*write a c-programme to the trace of a triangle*/
#include<stdio.h>
int main()
{
	int mat[3][3],sum=0,i,j;
	printf("\nenter the trace of a matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
			sum=sum+mat[i][j];
		}
		printf("\n trace of the given matrix is %d",sum);
}
