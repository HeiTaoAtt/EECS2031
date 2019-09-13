/***************************************
* EECS2031 – Lab3 function.c *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f\n\n", x, y, z)

int time = 0;
int sum = 0;
float ave = 0.0;

void runningAverage()
{
	int current;
	while(1)
	{
		printf("enter number (-1 to quit): ");
		scanf("%d", &current);
		if (current == -1){break;}
		time++;
		sum += current;
		ave = sum / time;
		MY_PRINT( sum, time, ave);
	}
}
