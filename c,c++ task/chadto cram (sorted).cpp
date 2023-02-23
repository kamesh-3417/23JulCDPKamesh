#include<stdio.h>
int main()

{
	int a[5],i,j,temp=0;
	
	for(i=0;i<5;i++)
	{
		printf("enter element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\n\nans \n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}
