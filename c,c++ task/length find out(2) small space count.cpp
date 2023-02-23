
#include<stdio.h>

int main()

{
	char str[20];
	int i,len=0;
	
	printf("enter name");
	
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	
	{
		len++;
	}
	
printf("%d",len);
	
	return 0;
}
