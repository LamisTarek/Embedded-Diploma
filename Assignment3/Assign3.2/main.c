/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int n,i;
	float average, sum=0.0, num[100];
	printf("Enter the numbers of the data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	//for the range of the memory
	while(n>100||n<=0)
	{
		printf("Error! number should be in the range of 1 to 100\n");
		printf("Enter the number again:");
		scanf("%d",&n);
	}

	for(i=0;i<n;++i)
	{
		printf("%d. Enter Number:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	average=sum/n;
	printf("Average=%.2f",average);
	return 0;

}



