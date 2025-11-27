/*write a c-programme to evualate the following expression a/b*c-b+a*d/3 */
#include<stdio.h>
int main()
{
	int a,b,c,d,result;
	printf("enter the values is");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	result= a/b*c-b+a*d/3;
	printf("the value is%d",result); 
	
}
