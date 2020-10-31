/*
 * main.c
 *
 *  Created on: Oct 22, 2020
 *      Author: HEI
 */
//  print the elements of an array in reverse
#include"stdio.h"
int main(){
	int arr[15],n,i;
	int* ptr;
	printf("Input the number of elements to store in the array (max 15):");
	fflush(stdout);
	scanf("%d",&n);
	ptr= &arr[0];
	printf("Input %d number of elements in the array:\n ",n);
	for(i=0; i<n; i++){
		printf("Elements-%d:",i+1);
		fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[n-1];
	printf("\n Elements in reverse order are :");
	for(i=n; i>0; i--){
		printf("\n element -%d:%d",i,*ptr);
		ptr--;
	}

}

