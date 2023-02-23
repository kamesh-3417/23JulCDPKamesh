#include<stdio.h>

int main ()

{
  int i,j;
  char k= 'A',a;
  
  for(i=1;i<=5;i++)
   {
   	for(j=1;j<=i;j++)
   	{
   		
   		a= k++;
   		  printf("%c ",a);
	   }
	   printf("\n");
	}	
	
	
	
	
	
	
	
	
	return 0;
}
