/*
 * main.c
 *
 *  Created on: Oct 22, 2020
 *      Author: HEI
 */
// print all alphabets
#include"stdio.h"
int main(){
	char alph[27];
	int a;
	char* ptr;
	ptr= alph;
	for(a=0; a<26; a++)
	{
		*ptr= a+'A';
		ptr++;
	}
	ptr= alph;
	printf("The Alphabets are: \n\n");

	for(a=0; a<26; a++)
	{
		printf("%c",*ptr);
		ptr++;
	}
	printf("\t");
	return 0;


}

