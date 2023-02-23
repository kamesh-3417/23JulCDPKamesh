#include<stdio.h>
#include<string.h>

int main()

{
	char str  [100];
	int len=0,i;
	
	printf("enter string");
	scanf(". & str");
	
	len=strlen(str);
	
	for(i=len;i>0;i--)
	
	{
		printf("%c,str[i]");
	}
	return 0;
}
