/*w.c.p to check whether number is perfect or not using while loop*/
#include <stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+1;
		}
		i++;
	}
	if(sum=n){
		printf("it is a perfect number");
	}
	else{
		printf("it is not a perfect number");
	}
}

