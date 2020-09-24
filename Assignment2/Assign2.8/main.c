/*
 * main.c
 *
 *  Created on: Aug 31, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	float num1, num2;
	char o;
	printf("Enter an operator: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(o)
	{
	case'+':
		printf("%.1f+%.1f=%.1f",num1,num2,num1+num2);
		break;
	case'-':
		printf("%.1f-%.1f=%.1f",num1,num2,num1-num2);
		break;
	case'*':
		printf("%.1f*%.1f=%.1f",num1,num2,num1*num2);
		break;
	case'/':
		printf("%.1f / %.1f=%.1f",num1,num2,num1/num2);
		break;
	default:
		printf("Error! you entered a wrong operator");
	}
	return 0;
}


