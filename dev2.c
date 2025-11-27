/*programme for demonstrating nesting of for statements */
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,y,x=40,;
	printf("\nenter a number for \ngenerating the pyramid:\n");
	scanf("%d",&num);
	/*display the pyramid*/
	for(y=0;y<=num;y++)
	{
		gotoxy(x,y+1);
		for(i=0-y;i<=y;i++)
		printf("%3d",abs(i));
		x=x-3;
	}
}
