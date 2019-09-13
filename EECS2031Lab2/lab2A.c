/***************************************
* EECS2031 – Lab2A *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

int isDigit(char);

int main(int argc, char* argv[])
{
	int d;
	char c;

	while(1)
	{
		printf("Enter an integer and a character separated by blank>");
		scanf("%d %c", &d, &c);

		if (d == -10000){break;}

		if (isDigit(c))
			printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", c, d, c, c-'0'+d);
		else
			printf("Character '%c' dose not represent a digit\n", c);		
	}
	return 0;
}

int isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}
