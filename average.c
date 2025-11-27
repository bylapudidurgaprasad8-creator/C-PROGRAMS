/*write a c-programme to read five subjects marks and display the average*/
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,average;
	float total;
	printf("enter five subjects marks");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	average=total/5;
	printf("the subjects is%d",average);
	
}
