#include<stdio.h>

int main ()

{
	int a=12, b=2, temp=0;
	printf("values before swap\n\n");
	
	printf("a= %d",a);
	
	printf("\nb = %d",b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\nvalues after swap \n\n");
	
	printf("a = %d",a);
	
	printf("\nb = %d",b);
	
	return 0;
}
