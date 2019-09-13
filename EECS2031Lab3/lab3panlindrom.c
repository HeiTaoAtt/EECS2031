/***************************************
* EECS2031 – Lab3 isPanlindrom *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>
#include <string.h>

#define SIZE 30

char str[SIZE];

int isPalindrom(char []);

int main(int argc, char* argv[])
{
	while (1)
	{
		scanf("%s",str);
		if(strcmp(str,"quit") == 0){break;}

		int i, len;
		for (i=0; str[i] != '\0'; i++);
		len = i;
		for (i=len-1; str[i] != '\0'; i--)
		{
			printf("%c",str[i]);
		}

		if( isPalindrom(str) == 1) {printf("\nIs a palindrom\n\n");}
		else {printf("\nIs not a palindrom\n\n");}	
	}
	return 0;
}

int isPalindrom(char arr[])
{
	/*calculate length of str*/
	int i, j, len;
	for (i=0; arr[i] != '\0'; i++);
	len = i;
	
	for (i=0, j=len-1; arr[i] != '\0'; i++, j-- )
	{
		if (arr[i] != arr[j])
			{return 0;}
	}
	return 1;
}

