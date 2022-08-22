#include<stdio.h>

int main()

{
	char a;
	
	printf("enter charecters");
	scanf("%c",&a);
	
	switch (a)
	
	{
		
		 case 'A':
		printf("vowle 1");
		break;
			
		case 'e':
		printf("vowle 2");
		break ;
			
			case 'i':
		printf("vowle 3");
		break;
			
			case 'o':
		printf("vowle 4");
		break;
			
			case 'u':
		printf("vowle 5");
		break;
			
			default:
		printf("invalid");
		break;
		
				
}

	
	return 0;
}

