#include<stdio.h>
#include<string.h>

int main()
{
 char str1[50],str2[50];

printf("enter the string to check for palindrome");

gets(str1);

strcpy(str2,str1);

strrev(str2);

if (strcmp(str1,str2)==0)	

printf("string is palindrome");

else 

printf("string is not palindrome");
	
return 0;
	
}
