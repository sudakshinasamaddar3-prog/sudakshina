/* w.a.p to take inputs from the user and display the output in the screen as an array*/
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter range");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n input elements are.....\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
