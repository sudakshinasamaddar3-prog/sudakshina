/*w.c.p to check whether number is perfect or not using for loop*/
#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(n==sum)
	    printf("it is a perfect number");
	else
	    printf("it is not a perfect number");
		    
}
