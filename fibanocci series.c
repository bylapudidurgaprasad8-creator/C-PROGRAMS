/*write a c-programme to print fibanocci series*/
#include<stdio.h>
int fib(n);
int main()
{
   int n,i;
   printf("\nEnter the integer of numbers");
   scanf("%d",&n);
   
   printf("\n fibanocci series:");
   for(i=0;i<n;i++)
   printf("%d",fib(i));
   return 0;
}
int fib(int x)
{
   if(x==0||x==1)
   	return x;
   	else
   	return fib(x-1)+fib(x-2);
}
