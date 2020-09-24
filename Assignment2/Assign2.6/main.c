/*
 * main.c
 *
 *  Created on: Aug 31, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int n,i,sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	i=1;
	while(n>=i)
	{
		sum=sum+i;
		i++;
	}
	printf("sum is %d",sum);
	return 0;



}


