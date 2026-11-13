/*w.a.p to print the following pattern
       4
     4 3 4
   4 3 2 3 4
 4 3 2 1 2 3 4
 */
#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4-i;j++)
	{
		printf(" ");
	}
	for(j=4;j>=4-i;j--)
	{
		printf("%d",j);
	}
	for(k=5-i;k<=4;k++)
	{
		printf("%d",k);
	}
	printf("\n");
    }
    return 0;
}
	
