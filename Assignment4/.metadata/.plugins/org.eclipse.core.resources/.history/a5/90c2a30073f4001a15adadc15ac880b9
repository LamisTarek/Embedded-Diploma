/*
 * main.c
 *
 *  Created on: Sep 11, 2020
 *      Author: HEI
 */
//Reverse a sentence using recursion

#include"stdio.h"
void reverse();

int main(){
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	reverse();
	return 0;
}

void reverse(){
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}

