/***************************************
* EECS2031 – Lab2B *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

int main(int argc, char* argv[])
{
	char c = getchar();

	while (c != EOF)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 'a' + 'A';
		putchar(c);
		c = getchar();
	}
	return 0;
}
