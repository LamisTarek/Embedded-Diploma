/*
 * test6.c
 *
 *  Created on: Aug 29, 2020
 *      Author: HEI
 */

#include"stdio.h"
int main()
{
	float a,b, temp;

	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
    scanf("%f",&b);

	temp =a;
	a=b;
	b=temp;

	printf("\nAfter swapping, value of a = %.2f ",a);
	printf("\nAfter swapping, value of b = %.2f ",b);
	return 0;

}
