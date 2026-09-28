#include <stdio.h>
int main()
{
	int term=2,sum=0,i=1,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("sum of the series=%d",sum);
	return 0;
}
