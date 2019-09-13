/***************************************
* EECS2031 – Lab3runningAveLocal2 *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>
#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f\n\n", x, y, z)

double runningAverage(int);

static int sum = 0;
static int time = 0;

int main(int argc, char* argv[])
{
	int current;
	while(1)
	{
		printf("enter number(-1 to quit): ");
		scanf("%d", &current);
		if(current == -1){break;}
		sum += current;
		time++;
		MY_PRINT(sum, time, runningAverage(sum));
	}
	return 0;
}

double runningAverage(int currentInput)
{
	return currentInput / time;	
}
