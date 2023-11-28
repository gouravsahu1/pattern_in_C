#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=11;i++)
    {
      for(j=1;j<=i;j++)
	  {
        if(j==1||j==i||i==11)
		{
          printf("* ");
		}
        else
		{
        printf("  ");
		}
	  }
    printf("\n");
	}	
}
		