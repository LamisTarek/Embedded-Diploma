/*
 * main.c
 *
 *  Created on: Sep 24, 2020
 *      Author: HEI
 */
//add distances using structure
#include"stdio.h"
struct Distance{
	int feet;
	float inch;
}m1,m2,sum;

int main(){
	printf("Enter information for 1st distance\n ");
	fflush(stdout);
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",&m1.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",&m1.inch);
	//2nd distance
	printf("Enter information for 2nd distance\n");
	fflush(stdout);
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d",&m2.feet);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%f",&m2.inch);
	//summation
	sum.feet=m1.feet+m2.feet;
	sum.inch=m1.inch+m2.inch;
	if(sum.inch>12.0)
	{
		sum.inch=sum.inch-12.0;
		++sum.feet;
	}
	printf("\n sum of distances=%d-%.1f",sum.feet,sum.inch);
	return 0;







}

