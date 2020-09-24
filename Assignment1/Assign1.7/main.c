/*
 * main.c

 *
 *  Created on: Aug 31, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	float a,b;
	printf("Enter a value of a:");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);
	printf("Enter a value of b:");
    fflush(stdin); fflush(stdout);
    scanf("%f",&b);
    a= a+b;
    b= a-b;
    a=a-b;
    printf("\nAfter swapping, value of a=%.2f\nAfter swapping, value of b=%.2f",a,b);











}

