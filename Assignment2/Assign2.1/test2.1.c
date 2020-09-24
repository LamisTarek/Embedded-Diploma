/*
 * test2.1.c
 *
 *  Created on: Aug 29, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int num;
	printf("Enter a integer to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	if((num%2)==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
	return 0;

}


