/*
 * test2.2.c
 *
 *  Created on: Aug 29, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	char m;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&m);
	if(m=='a'||m=='A'||m=='e'||m=='E'||m=='i'||m=='I'||m=='o'||m=='O'||m=='u'||m=='U')
		printf("%c is a vowel",m);
	else
		printf("%c is a constent",m);
	return 0;



}


