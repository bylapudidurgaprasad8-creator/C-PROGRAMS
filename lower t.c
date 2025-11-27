/*write a c-programme to print the lower tirangle of a matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],j,i,ltm=1;
	printf("\n enter the elements of the matrix");
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
				if(i<j &&mat[i][j] || i>=j &&mat[i][j]==0)
				{
				ltm=0;
				break;	
				}
			}	
	}
	if(ltm==1)
	{
		printf("\n the lower triangle of a matrix is possible");
	}
	else
	printf("\n the lower triangle of a matrix is not possible");
}
