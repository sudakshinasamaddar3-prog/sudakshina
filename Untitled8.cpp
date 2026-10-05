//write a c program to count the digits of a whole number
#include<stdio.h>
int main()
{
	int n,ct=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		ct++;
		n=n/10;
	}
	printf("the number of digits=%d\n",ct);
}
