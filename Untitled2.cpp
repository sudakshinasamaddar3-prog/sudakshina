#include <stdio.h>
int main()
{
	int n,m1=0,m=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		m1 = n%10;
		m=m*m1;
		n=n/10;
	}
	printf("multiplied value: %d\n",m);
	return 0;
}
