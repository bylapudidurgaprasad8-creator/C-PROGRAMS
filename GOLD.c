#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<=3)
	{
		printf("BRONZE");
	}else if(x<=6){
		printf("SLIVER");
	}else{
		printf("GOLD");
	}
	return 0;
}
