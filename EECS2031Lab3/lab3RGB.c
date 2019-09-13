/***************************************
* EECS2031 – Lab3RGB *
* Author: Tingting, Yang *
* Email: Tingtingwang992@gmail.com *
* EECS_num: ilove992 *
* York Student #: 215120579 *
****************************************/

#include<stdio.h>

#define AlphaValue 100
#define SIZE 32

void printBynary(int n);

void printBinary(int n){
        printf("binary: ");
        int cou = SIZE-1;
        int k[SIZE]={0};

        while (n) {
             if (n & 1)
                  k[cou]=1; //printf("1");
             else
                  k[cou]=0; //printf("0");

             n >>= 1; 
             cou--;
        }
        int i=0;
        for(; i< SIZE;i++)
        {
            printf("%d", k[i]);
            if ((i+1)%8==0)
            {
                printf(" ");
            }
        }

}

int main(int argc, char* argv[])
{
	int r, g, b;
	unsigned int rgb_pack;
	int r_unpack, g_unpack, b_unpack;
	int alpha = AlphaValue;

	printf("enter R value (0~255): ");
	scanf("%d", &r);
	printf("enter G value (0~255): ");
	scanf("%d", &g);
	printf("enter B value (0~255): ");
	scanf("%d", &b);

	while(! (r<0 || g<0 || b <0) )
	{
		printf("A: %d\t", alpha);	printBinary(alpha); printf("\n");
		printf("R: %d\t", r);	printBinary(r); printf("\n");
		printf("G: %d\t", g);	printBinary(g); printf("\n"); 
		printf("B: %d\t", b);	printBinary(b); printf("\n");
	
		/*Calculate rgb_pack*/
		rgb_pack =	(alpha<<24) + (r<<16) + (g<<8) + b;

		printf("\nPacked:\t");	printBinary(rgb_pack);	printf(" (%d)\n", rgb_pack);
		printf("\nUnpacking  ......\n");
	
		/*Calculate unpacking for r, g, b*/
		int mask = (1<<8)-1;
		r_unpack=(rgb_pack&(mask<<16))>>16;
		g_unpack=(rgb_pack&(mask<<8))>>8;
		b_unpack=rgb_pack&(mask);

		printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
		printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
		printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
		printf("------------------------------------\n\n"); 	
 
		/* read again */
		printf("enter R value: ");
		scanf("%d",&r);
		printf("enter G value: ");
		scanf("%d",&g);
		printf("enter B value: ");
		scanf("%d",&b);
	}
	return 0;
}
