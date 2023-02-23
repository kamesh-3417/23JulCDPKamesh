#include<stdio.h>
int add (int num)

{
	if(num<=0)
	{
		return 0;
	}
	return num+add(num-1);
}

int main ()

{
	int a;
	
	printf("enter a number :");
	scanf("%d",&a);
	
	printf("factorial of %d is : %d",a,add(a));
	
	return 0;
}
