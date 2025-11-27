/*write a c-programmeto calculate distance travelled by an object d=(u*t)+(a*t*t)/2 */

#include<stdio.h>
int main()
{
	float u,t,a,d;
	printf("the distance objectis");
	scanf("%f",&u);
	printf("the time taken by the object is");
	scanf("%f",&t);
	printf("the acceleration of the object is");
	scanf("%f",&a);
	d=(u*t)+(a*t*t)/2;
	printf("the distance travelled by object is %f ",d);
	
}
