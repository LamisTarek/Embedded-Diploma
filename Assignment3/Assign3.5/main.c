/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int a[30],element,i,num;
	printf("\nEnter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("\nnEnter the values");
	fflush(stdin); fflush(stdout);
	for(i=0; i<num; i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements to be searched:  ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	i=0;

	while(i<num && element!=a[i]){
		i++;
	}
	if (i<num){
		printf("Number found at the location=%d",i+1);
	}else{
		printf("Number not found");
	}
	return 0;
}

