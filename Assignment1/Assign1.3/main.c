/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: HEI
 */

#include "stdio.h"
int main( )
{
    int num1, num, sum;
    printf("Enter two integers:");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&num1,&num);
    sum=num1+num;
    printf("\n Sum: %d",sum);
    return 0;
}


