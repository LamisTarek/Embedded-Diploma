/*
 * main.c
 *
 *  Created on: Sep 11, 2020
 *      Author: HEI
 */
//calculate the power of a number
#include"stdio.h"
int power(int a, int b);
int main(){

	int base, num;
	printf("Enter base number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("\nEnter power number(positive integer):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("%d^%d=%d",base,num,power(base,num));
	return 0;


}
int power(int base, int num)
{
	if(num!=0)
		return (base*power(base,num-1));
	else
		return 1;
}


