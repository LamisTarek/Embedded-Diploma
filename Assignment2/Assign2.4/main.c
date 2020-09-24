/*
 * main.c
 *
 *  Created on: Aug 31, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	float a;
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	if(a>0)
		printf("%.2f is a positive",a);
	else if(a<0)
		printf("%.2f is a negative",a);
	else
		printf("you entered zero");
		return 0;






}


