/***************************************
* EECS2031 – Lab2C *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>
#include<string.h>

#define SIZE 21

int length(char word[]);
int indexOf(char word[], char c);
int isQuit(char word[]);

int main(int argc, char* argv[])
{
	char myString[SIZE] = {};
	char c;		
	
	while(1)
	{
		printf("Enter a  word and a character separated by blank:");
    	scanf("%s %c", myString, &c);

		if (isQuit(myString) == 1){break;}

		printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d\n\n",
				myString, length(myString), c, indexOf(myString, c));	
	}

	return 0;
}

int length(char word[])
{
	int i = 0;
	while (word[i] != '\0')
		{i++;}
	return i;		
}

int indexOf(char word[], char c)
{
	int x;
	int i;
	for (i=0; i <= SIZE; i++)
	{
		if (word[i] == c)
			{return i;}
	}	
	return -1;
}

int isQuit(char word[])
{
	char quit[SIZE] = {'q','u','i','t'};
	int i;	
	for (i=0; quit[i] != '\0' || word[i] != '\0'; i++)
		{
			if (word[i] != quit[i])
			{return 0;} 	
		}
	return 1;
}
