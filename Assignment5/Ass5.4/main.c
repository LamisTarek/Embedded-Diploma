/*
 * main.c
 *
 *  Created on: Sep 24, 2020
 *      Author: HEI
 */
#include"stdio.h"
struct Sstudent{
	char name[10];
	int num;
	float marks;
};
int main(){
	struct Sstudent c[10];
	int i;
	printf("Enter information for students:\n\n");
	for(i=0;i<10;i++){
		c[i].num=i+1;
		printf("for roll number %d\n",c[i].num);
		printf("Enter name:");
		fflush(stdout);
		scanf("%s",c[i].name);
		printf("Enter marks:");
		fflush(stdout);
		scanf("%f",&c[i].marks);
		printf("\n");
	}
	//for Displaying
	printf("Displaying information of students:\n\n");
	for(i=0;i<10;i++){
		printf("information for roll number%d:\n",i+1);
		printf("Name:%s\n",c[i].name);
		printf("Marks:%.1f\n",c[i].marks);
		printf("\n");
	}
	return 0;
}


