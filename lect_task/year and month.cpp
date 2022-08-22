#include<stdio.h>
int main()
{
	
	int num_of_the_days,year,month;
	
	printf("enter_num_of_the_days \n");
	scanf("%d", &num_of_the_days);
	
	year=num_of_the_days/365;
	
	month=(num_of_the_days-year*365)/30;
	
	printf("year =%d \n",year);
	printf("month =%d \n",month);
	
	return 0;
}

















