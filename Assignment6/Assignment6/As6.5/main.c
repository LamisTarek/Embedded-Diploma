/*
 * main.c
 *
 *  Created on: Oct 22, 2020
 *      Author: HEI
 */
//  show a pointer to an array which contents are pointer to structure.
#include"stdio.h"
struct employee{
	char *name;
	int id;
};

int main(){
	static struct employee x1= {"George",1001},
			               x2= {"Alex",1002},
						   x3= {"Maya",1003};
	struct employee(*arr[])= {&x1, &x2, &x3};
	struct employee *(*ptr)[3]= &arr;

	printf("Employee name: %s \n",(**(*ptr+1)).name);
	printf("Employee Id: %d", (*(*ptr)+1)->id);



}
