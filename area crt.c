/*write a c-programme to read and display the area of circle ,area of rectangle,area of triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
      float r,l,b,h,area;
	printf("enter the value is");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("area of circle is%f",area);
	
	printf("enter the value is");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("area of rectangle is%f",area);
	
	printf("enter the value is");
	scanf("%f%f",&b,&h);
	area=1/2*b*h;
	printf("area of triangle is%f",area);
}
