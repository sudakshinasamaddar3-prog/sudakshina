/*w.c.p to check whether a number is prime or not using while loop*/
#include <stdio.h>
int main()
{
	int i=2,n,f=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
    	printf("it is a prime number");
	else
	    printf("it is not a prime number");
}
