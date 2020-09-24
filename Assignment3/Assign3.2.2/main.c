/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	char a[1000],i;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	scanf("%s",a);
	for(i=0;a[i]!='\0';++i);
		printf("Length of string:  %d",i);
	    fflush(stdin); fflush(stdout);
	    return 0;

}

