/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int num,element,i,location,arr[30];
	printf("\nEnter no of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be inserted:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	printf("\nEnter the location:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=num;i>=location;i--){
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=element;

	for(i=0;i<num;i++)
		printf("%d\t",arr[i]);
	return 0;

}

