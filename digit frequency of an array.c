/*write a c-progrmme to find digit frequency of an array*/
#include<stdio.h>
int main()
{
	int n,i,digit,num;
	int freq[10]={0};
	printf("\n Enter the size of an element");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d element",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
	num=arr[i];
	if(num<0)num=-num;
	
	if(num==0){
	freq[0]++;
    }
	
		while(num>0){
		digit=num%10;
		freq[digit]++;
		num=num/10;	
	}
	printf("\n digitfrequency :\n");
	for(i=0;i<n;i++)
	printf("\ndigit is %d:times is %d\n",i,freq[i]);
    }
	return 0;
}
