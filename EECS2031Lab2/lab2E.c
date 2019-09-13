/***************************************
* EECS2031 – Lab2E *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

int isLeap(int);

int main(int argc, char* argv[])
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);	

	while (year > 0)
	{			
		if(isLeap(year))
			{printf("\nYear %d is a leap year\n", year);}
		else
			{printf("\nYear %d is not a leap year\n", year);}	
		printf("Enter a year: ");
		scanf("%d", &year);
	}
	return 0;
}

int isLeap(int year)
{
	if(((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0)) 
		{return 1;}
	else
		{return 0;}
}
