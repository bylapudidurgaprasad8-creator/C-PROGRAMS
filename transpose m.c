/*write a c-programme to print the transpose of matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],tmat[3][3],i,j;
	printf("\n enter the elements of the matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmat[i][j]=mat[i][j];
		}
	}
	printf("\n enter the transpose of matrix\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",tmat[i][j]);
		}
		printf("\n");
	}
}
