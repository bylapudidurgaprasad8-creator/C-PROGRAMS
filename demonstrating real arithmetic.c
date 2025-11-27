/*programme for demonstrating real arithmetic*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float deg,radian;
	printf("enter the degree values");
	scanf("%f",&deg);
	radian=(deg*3.14)/180.00;
	/*using a formala for converting degree*/
	printf("\nthe equivalent value in radians is %.2f",radian);
	
}
