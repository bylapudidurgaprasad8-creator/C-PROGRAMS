/*write a c-programme to the subcrption of an element*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("Equaliteral triangle");
	}else if(a==b || b==c){
	  printf("oscesels triangle");	
	}else{
		printf("Scalen triangle");
	}
	return 0;
}
