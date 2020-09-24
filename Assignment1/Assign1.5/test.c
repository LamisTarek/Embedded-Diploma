/*
 * test.c
 *
 *  Created on: Aug 29, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	char c;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of the character %c is %d",c,c);
	return 0;


}

