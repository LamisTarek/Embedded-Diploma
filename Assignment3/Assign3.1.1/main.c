/*
 * main.c

 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	char a[1000],ch;
	int i,count=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	printf("Enter a character to find frequency:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for(i=0;a[i]!='\0' ;++i){

		if(ch==a[i])
			++count;
	}
	printf("Frequency of %c= %d",ch,count);
	return 0;
}
