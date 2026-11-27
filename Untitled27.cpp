/* w.a.p to average all the elements of an array*/
#include <stdio.h>
int main()
{
	int i,n;
	float average,sum=0.0;
	printf("enter the number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum= sum+arr[i];
	}
	average=sum/n;
	printf("the average of the elements=%.2f\n",average);
	return 0;
}
