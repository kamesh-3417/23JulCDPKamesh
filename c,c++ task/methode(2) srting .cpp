#include<stdio.h>
#include<string.h>

int main()

{
	char str[100],temp;
	int len=0,i;
	
	printf("enter string:");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<=len/2;i++)
	
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	
	printf("\nreverse : %s",str);
	
	return 0;	
}
