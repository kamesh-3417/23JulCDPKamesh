#include<stdio.h>

int main()

{
	int h,r;
	
	printf(" enter anr number");
	scanf ("%d",&h);
	
	while (h>0)
	
	{
		r=h%10;
		printf("%d",r);
		h=h/10;
	}
	return 0;
	
}
