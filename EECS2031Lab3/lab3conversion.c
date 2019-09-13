/***************************************
* EECS2031 – Lab3conversion *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

float fun_IF(int,char,float);
float fun_II(int,char,int);
float fun_FF(float,char,float);

int main(int argc, char* argv[])
{
	int intnum;
	float fltnum;
	char op;
	while(1)
	{
		printf("Enter operand_1 operator operand_2 separated by blanks>");
		scanf("%d %c %f", &intnum, &op, &fltnum);
		if ((intnum == -1) && (fltnum == -1.0)) {break;}

		printf("Your input 'x xx xxx' results in %f(fun_IF) and %f\n(fun_II) and %f(fun_FF)\n\n",
					fun_IF(intnum,op,fltnum), fun_II(intnum,op,fltnum), fun_FF(intnum,op,fltnum));
	}
	return 0;
}


float fun_IF(int a,char b,float c)
{
	if (b == '+'){return a+c;}
	else if (b == '-'){return a-c;}
	else if (b == '*'){return a*c;}
	else if (b == '/'){return a/c;}
}

float fun_II(int a,char b,int c)
{
	if (b == '+'){return a+c;}
	else if (b == '-'){return a-c;}
	else if (b == '*'){return a*c;}
	else if (b == '/'){return a/c;}
}

float fun_FF(float a,char b,float c)
{
	if (b == '+'){return a+c;}
	else if (b == '-'){return a-c;}
	else if (b == '*'){return a*c;}
	else if (b == '/'){return a/c;}
}
