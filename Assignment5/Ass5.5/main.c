/*
 * main.c
 *
 *  Created on: Sep 24, 2020
 *      Author: HEI
 */
//are of a circle macros
#include"stdio.h"
#define PI 3.1415
int main(){
	int raduis;
	float area;
	printf("Enter the raduis:");
	fflush(stdout);
	scanf("%d",&raduis);
	area=PI*raduis*raduis;
	printf("Area=%.2f",area);
	return 0;
}
