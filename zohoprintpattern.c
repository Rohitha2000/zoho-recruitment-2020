#include<stdio.h>
int main()
{
	int i,j,k,c,n;
	scanf("%d", &n);
	c=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		   for(j=1;j<=n-i;j++)
		   {
		   	printf(" ");
		   }
			for(j=n-i+1;j<=n;j++)
		    {
			   c++;
			   printf("%d ", c);
		    }
		}
		
		printf("\n");
	}
}
