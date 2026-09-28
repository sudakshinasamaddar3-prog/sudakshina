#include <stdio.h>
int main()
{
	int term=1,sum=0,i=1,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+i;
		i++;
	}
	printf("sum of the series=%d",sum);
	return 0;
}
