#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=5; i>=1; --i)
	{
		k=1;
		for(j=1; j<=i; j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}