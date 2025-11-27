#include<stdio.h>
int main()
{
	int x,y,height;
	scanf("%d %d",&x,&y);
	height = abs(x)>abs(y)?abs(x):abs(y);
	printf("%d",height);
	
}
