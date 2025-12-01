#include<stdio.h>
int main()
{
	int A,B,X,Y,messi,ranlod;
	scanf("%d%d%d%d",&A,&B,&X,&Y);
	messi=2*A+B;
	ranlod=2*X+Y;
	if(messi>ranlod)
	{
		printf("messi");
	}else if(ranlod>messi){
		printf("ranlod");
	}else{
		printf("Equal");
	}
	return 0;
}
