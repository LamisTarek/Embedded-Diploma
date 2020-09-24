/*
 * test2.3.c
 *
 *  Created on: Aug 29, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdin); fflush(stdout);
    scanf("%f %f %f",&a,&b,&c);
	if(a>=b&&a>=c)
		printf("Max number is %.2f",a);
	if(b>=a&&b>=c)
		printf("Max number is %.2f",b);
	if(c>=b&&c>=a)
		printf("Max number is %.2f",c);
	return 0;




}

