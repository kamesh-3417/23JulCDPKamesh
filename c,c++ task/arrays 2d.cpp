#include<stdio.h>
int main()
{
	int a1[2][3],a2[2][3],a3[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j;3,j++)
		{
			printf("enter element:");
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\n\n____first matrix____\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element");
			scanf("%d",&a2[i][j]);
		}
	}
	printf("\n\n____seond matrix____\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a2[i][j]);
		}
		printf("\n");
	}
	printf("third matrix is \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
			printf("%d",a3[i][j]);
		}
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
