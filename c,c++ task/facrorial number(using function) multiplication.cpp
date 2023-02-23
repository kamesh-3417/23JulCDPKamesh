#include<stdio.h>

int fact(int num)

{
	if(num<=0)
	{
		return 1;
	}
	return num*fact(num-1);
}

int main()
{
	int a;
	
	printf("enter a number:");
	scanf("%d",&a);
	
	printf("factorial of %d is : %d",a,fact(a));
	
	return 0;
}
