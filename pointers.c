/*write a c-programme to print the pointer*/
#include<stdio.h>
int main()
{
	int i,*p,**q;
	
	i=10;
	p=&i;
	q=&p;
	printf("%d %u %u",i,p,q);
}
