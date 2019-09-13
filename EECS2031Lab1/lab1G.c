/***************************************
* EECS2031Z – Lab1 *
* Filename: lab1G.c*
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com (Sorry I forgot eecs mail) *
* eecs_username: ilove992*
* York Student #: 215120579
****************************************/

#include<stdio.h>

int main(int args, char *argv[])
{
	int c;
	int wc = 0;
	int nl = 1;
	c = getchar();
	while (c != EOF)
		{
			if (c == '\n') 
			{
				++nl;
				c = getchar();
			}		

			wc++;
			c = getchar();

		}
	printf("# of chars: %d\n# of lines: %d\n", wc, nl);	
	return 0;
}
