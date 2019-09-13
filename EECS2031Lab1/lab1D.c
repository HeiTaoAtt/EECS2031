/***************************************
* EECS2031Z – Lab1 *
* Filename: lab1D.c*
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com (Sorry I forgot eecs mail) *
* eecs_username: ilove992*
* York Student #: 215120579
****************************************/

#include <stdio.h>

float sum (float, float);

int main(int argc, char *argv[])
{
	int i, n;
	float x, y;
	
	printf("Enter the number of interactions:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter two floating numbers separated by ##:");
		scanf("%f##%f", &x, &y);

		printf("%f + %f = %f\n", x, y, sum(x, y));
	}
	return 0;
}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
