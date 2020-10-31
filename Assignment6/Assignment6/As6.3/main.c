/*
 * main.c
 *
 *  Created on: Oct 22, 2020
 *      Author: HEI
 */
// print string in reverse
#include"stdio.h"
int main(){
	char str[50];
	char rev[50];
	char* stptr= str;
	char* reptr= rev;
	int i=-1;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
	while(*stptr)
	{
		stptr++;
		i++;

	}
	while(i>=0){
		stptr--;
		*reptr=*stptr;
		reptr++;
		--i;
	}
	*reptr='\0';
	printf("Reverse of the string: %s\n\n",rev);






}
