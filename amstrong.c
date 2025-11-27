/*write a c-programmme to print an amstoring no*/
#include<stdio.h>
int main()
{
	int num,rem,sum=0,temp;
	printf("enter any number is");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
	     temp=temp/10;
	 }
		if(sum==num){
	        	printf(" it is amstrong number");
	    }else{
	    	printf("it is not amstrong number");
    	}
    	return 0;
}
