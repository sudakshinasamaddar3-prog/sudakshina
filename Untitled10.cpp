//write a c program to print tribonacci series
#include <stdio.h>
int main()
{
	int n,i=1,a=0,b=0,c=1,d;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	return 0;
}
