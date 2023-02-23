#include<stdio.h>
#include<string.h>

int main ()

{
	char str[100],temp;
	int len=0,i;
	
	printf ("enter string :");
	gets(str);
	
	len=strlen(str);
	
	printf("length of string is : %d,len");
	
	return 0;
	
}
