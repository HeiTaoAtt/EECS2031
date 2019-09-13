/***************************************
* EECS2031Z – Lab1 *
* Filename: lab1C.c*
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com (Sorry I forgot eecs mail) *
* eecs_username: ilove992*
* York Student #: 215120579
****************************************/

#include <stdio.h>

float sum (float, float);

int main(int argc, char *argv[])
{
	float x, y;
	
	printf("Enter two float numbers separated by ##:");
	scanf("%f##%f", &x, &y);

	float su = sum(x,y);
	printf("%f + %f = %f\n", x, y, su);

	return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
