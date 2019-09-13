/***************************************
* EECS2031Z – Lab1 *
* Filename: lab1F.c*
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com (Sorry I forgot eecs mail) *
* eecs_username: ilove992*
* York Student #: 215120579
****************************************/

#include<stdio.h>

int main(int args, char *argv[])
{
	int c;
	int count = 0;
	c = getchar();
	while (c != EOF)
		{
			if (c == '\n') 
			{
				count = count;
				c = getchar();
			}		

			count++;
			c = getchar();

		}
	printf("# of chars: %d\n", count);	
	return 0;
}
