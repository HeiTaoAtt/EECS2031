/***************************************
* EECS2031 – Lab2C0 *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>
#include<string.h>

#define SIZE 10

int main(int argc, char* argv[])
{

  	int k[SIZE] = {0};
  	int i=0;
  	for (i=0; i < SIZE; i++)
		 printf("k[%d]: %d\n", i, k[i]);


  	char msg[]="Hello world";
  	printf("\nmsg: %s\n", msg);
  	printf("memory size of msg: %lu (bytes)\n", sizeof(msg));
  	printf("strlen of msg: %lu\n", strlen(msg));

	for (i = 0; i <= SIZE; i++)
		{
			printf("msg[%d] %d %c\n", i, msg[i], msg[i]);
		}
	msg [SIZE+1] = '\0';
	printf("msg[%d] %d %c\n", i, msg[SIZE+1], msg[SIZE+1]);



  	char msg2[2*SIZE] = "Hello world";
  	printf("\nmsg2: %s\n", msg); 
  	printf("memory size of msg2: %lu (bytes)\n", sizeof(msg2));
  	printf("strlen of msg2 : %lu\n", strlen(msg));

    for (i = 0; i < 2*SIZE; i++)
        {
            printf("msg2[%d] %d %c\n", i, msg2[i], msg2[i]);
        }

  	char msg3[2*SIZE];
  	printf("\nEnter a string: ");
  	scanf("%s",msg3);
 	printf("msg3: %s\n",msg3);
	printf("memory size of msg3: %lu (bytes)\n", sizeof(msg3));
	printf("strlen of msg3: %lu\n", strlen(msg3));
 
   for (i = 0; i < 2*SIZE; i++)
        {
            printf("msg3[%d] %d %c\n", i, msg3[i], msg3[i]);
        }

	return 0;
}
