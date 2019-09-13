/***************************************
* EECS2031 – Lab3runningAveLocal *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>
#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f\n\n", x,y,z)

double runningAverage(int, int);

int main(int argc, char* argv[])
{
	int current, sum;
	int time = 0;
	while(1)
	{
		printf("enter number(-1 to quit): ");
		scanf("%d", &current);
		if(current == -1){break;}
		sum += current;
		time++;
		MY_PRINT(sum, time, runningAverage(sum, time));
	}
	return 0;
}

double runningAverage(int currentSum, int inputCount)
{
	return currentSum / inputCount;
}
