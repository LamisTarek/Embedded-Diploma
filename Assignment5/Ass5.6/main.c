/*
 * main.c
 *
 *  Created on: Sep 24, 2020
 *      Author: HEI
 */
#include"stdio.h"
union job{
	char name[32];
	float salary;
	int work_no;
}u;
struct job1{
	char name[32];
	float salary;
	int work_no;
}s;
int main(){
	printf("size of union=%d",sizeof(u));
	printf("\n size of structure=%d",sizeof(s));
	return 0;
}

