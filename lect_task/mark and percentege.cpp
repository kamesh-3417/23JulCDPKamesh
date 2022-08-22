#include<stdio.h>

int main()
{
        float a1,a2,a3,total;
		float per;
        printf("enter the sub mark: \n");
        scanf("\n%f%f%f",&a1, &a2, &a3);
        total=a1+a2+a3;
        per=(total*100.0)/300;
        
        printf("\ntotal=%f",total);
        printf("\nper=%f",per);
    if(per>=70)
        {
        	printf("\n a+");
        
		}
    else if(per>=50)
        {
        	printf("\n b+");
		}
    else if(per>=35)
		
		{
			printf("\n c+");
		}
	else
	{
		printf("\n f");
	}
}
