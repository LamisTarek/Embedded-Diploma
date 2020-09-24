/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: HEI
 */
#include"stdio.h"
int main()
{
	int a[10][10], trans[10][10],r,c,i,j;
	printf("Enter of rows and colum of matrix:\n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);

	//elements of matrix
	printf("\nEnter elements of matrix:\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Enter elements of matrix a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	//displaying matrix
	printf("\n Entered Matrix:\n");
	for(i=0;i<r;++i)
			for(j=0;j<c;++j)
			{
				printf(" %d ", a[i][j]);
				if(j==c-1)
					printf("\n\n");
			}
	//for the transpose
	for(i=0;i<r;++i)
		    for(j=0;j<c;++j)
		    {
		    	trans[j][i]=a[i][j];
		    }
	//displaying the transpose
	printf("\nTranspose of matrix:\n");
	for(i=0;i<c;++i)
			for(j=0;j<r;++j)
			{
				printf("%d ",trans[i][j]);
				if(j==r-1)
					printf("\n\n");
			}
	return 0;
		}





