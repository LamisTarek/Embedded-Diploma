/*
 * main.c
 *
 *  Created on: Aug 31, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int n,i;
	int factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n<0)
		printf("Error!! Factorial of negative number doesn't exist");
	else
	{
		for(i=1;i<=n;i++)
		{

			factorial*=i;
		}

		printf("factorial= %d",factorial);
	}
	return 0;






}


