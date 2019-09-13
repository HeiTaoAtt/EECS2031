/***************************************
* EECS2031Z – Lab1 *
* Filename: lab1A.c *
* Author: Tingting, Yang*
* Email: Tingtingwang992@gmail.com (Sorry I forgot my eecs mail)*
* eecs_username: ilove992*
* York Student #: 215120579
****************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int m,d,y;
	printf("Enter monthEnter month, day and year separated by spaces: ");

	scanf("%d %d %d", &m, &d, &y);

	printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", m, d, y, y, m, d, y, m, d);

	return 0;
}
