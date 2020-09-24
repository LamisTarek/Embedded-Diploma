/*
 * main.c
 *
 *  Created on: Sep 11, 2020
 *      Author: HEI
 */
//calculate factorial of number using recursion
#include"stdio.h"
int factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	int n;
	printf("Enter a positive number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	printf("Factorial of %d= %d", n, factorial(n));

}

