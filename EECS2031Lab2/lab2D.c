/***************************************
* EECS2031 – Lab2D *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

int main(int argc, char* argv[])
{	
	int c = getchar();
	int digit[10] = {0};
	
	while ( c != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			digit[c-'0']++;
		}		
		c = getchar();
	}

	int i;
	for (i=0; i < 10; i++)
		printf("%d: %d\n",i,digit[i]);

	return 0;
}
