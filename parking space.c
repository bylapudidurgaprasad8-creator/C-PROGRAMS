#include<stdio.h>
int main()
{
	int X,Y,H,total;
	scanf("%d %d %d",&X,&Y,&H);
	
	if(H==1)
	{
		total = X;
	}else{
		total = X+(H-1)*Y;
	}
	printf("d",total);
}
