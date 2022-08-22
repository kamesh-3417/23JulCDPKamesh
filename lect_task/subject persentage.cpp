#include<stdio.h>

int main()

{
	int eng,com,ba,eco,sci;
	int total= eng+com+ba+eco+sci;
	float per;
	
    printf("enter eng \n");
	scanf ("%d",&eng);
	 
	printf("enter com \n");
	scanf ("%d",&com);

	printf("enter ba \n");
	scanf ("%d",&ba);

	printf("enter eco \n");
	scanf ("%d",&eco);

	printf("enter sci \n"); 
	scanf ("%d",&sci);

total=eng+com+ba+eco+sci;
per=total/5;

if(eng >=35 && com >=35 && ba >=35 && eco >=35 && sci >=35)

{
printf("pass\n");
printf("per%f\n",per);	
 }
 else
 {
 	printf("fail\n");
 }


printf("total %d\n",total);


}		

	

