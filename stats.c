/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief 	Statistics on an array 
 *
 * This module implements several functions to analyze an array of unsigned char data items and 
 * report analytics on the maximum, minimum, mean, and median of the data set. 
 * In addition, it is present a function to reorder the items of the array from large to small.
 *
 * @author Gaia Littarru
 * @date 20/03/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Data items in the original order \n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  printf("Data items in descending order \n");
  print_array(test, SIZE);  
}

/* Functions definition */

/* print_array() */
void print_array(unsigned char * const arrList, const unsigned int arrSize){
	for(int i = 0; i < arrSize; i++){		
		printf("Item %2d  %5d \n", (i+1), arrList[i]);
	}

}

/* sort_array() */
void sorth_array(unsigned char * arrList, const unsigned int arrSize){

	for(int i = 0; i < arrSize - 1; i++){
		for(int j = 0; j < arrSize - 1; j++){
			if(arrList[j] < arrList[j+1]){
				unsigned char hold = arrList[j];
				arrList[j] = arrList[j+1];
				arrList[j+1] = hold;
			}
		}	
	}
}

/* find_maximum() */
unsigned char find_maximum(unsigned char *arrList, const unsigned int arrSize)
{
	unsigned char maximum = 0u;
	sorth_array(arrList, arrSize);
	maximum = arrList[0];
	return maximum;
}

/* find_minumum() */
unsigned char find_minimum(unsigned char *arrList, const unsigned int arrSize)
{
	unsigned char minimum = 0u;
	sorth_array(arrList, arrSize);
	minimum = arrList[arrSize - 1];
	return minimum;
}

/* find_mean() */
int find_mean(unsigned char *arrList, const unsigned int arrSize){
	unsigned int  sum = 0u;
	for(int i = 0; i < arrSize; i++){
		sum += arrList[i];
	}
	return ( sum / arrSize);
}

/*find_median() */
unsigned char find_median(unsigned char *arrList, const unsigned int arrSize){
	unsigned char median = 0u;
	if( (arrSize % 2) != 0 ){
		median = arrList[((arrSize + 1) / 2) - 1];
	}
	else{
		median = ( arrList[(arrSize / 2) -1] + arrList[arrSize / 2]) / 2;
	}
	
	return median;
}

/* print_statistics */
void print_statistics(unsigned char * const arrList, const unsigned int arrSize){
	unsigned char maximum = 0u;
	unsigned char minimum = 0u;
	int mean = 0;
	unsigned char median = 0u;

	mean    = find_mean(arrList, arrSize);
	median  = find_median(arrList, arrSize);
	maximum = find_maximum(arrList, arrSize);
	minimum = find_minimum(arrList, arrSize);

	printf(" *** STATISTICS *** \n");
	printf("Minimum value is %3d \nMaximum value is %d \nMean value is %6d \nMedian value is %4d \n", minimum, maximum, mean, median);
	printf(" ****************** \n");

}
