/*
 * main.c
 *
 *  Created on: Jul 24, 2016
 *      Author: gena
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; //length of basis
	int i, k, j;

	printf("Please type the length of the triangle basis: ");
	scanf("%d", &n);

	for(i=0; i<n/2+1; i++)//this loop handles raws
	{
		printf("\n");    //jump to the next raw
		for(k=0;k<n;k++) //this loop handles columns
		{
			printf(" "); //print space
			if(k==n/2-i) //this decide from where to start to print stars
			{
				for(j=k-i;j<k+i+1;j++)//this loop handles printing stars
				{
					printf("*");
				}

			}

		}
	}

	return 0;
}
