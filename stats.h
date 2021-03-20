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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/******************************************************************************
 * Function: sorth_array
 * Description:
 * This function takes a set of numbers and sorts them from largest to smallest.  
 * Parameters:
 *     unsigned char *   : Pointer to a data set
 *     const unsigned int: Number of items in data set
 * Return: 
 *     void
 *****************************************************************************/
void sorth_array(unsigned char * arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: print_array
 * Description:
 * This function takes a set of numbers and print them to the screen.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     void
 *****************************************************************************/
void print_array(unsigned char * const arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: find_maximum
 * Description:
 * This function takes a set of numbers and returns the maximum.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     maximum item
 *****************************************************************************/
unsigned char find_maximum(unsigned char *arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: find_minimum
 * Description:
 * This function takes a set of numbers and returns the minumum.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     minumum item
 *****************************************************************************/
unsigned char find_minimum(unsigned char *arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: find_mean
 * Description:
 * This function takes a set of numbers and returns the mean.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     mean
 *****************************************************************************/
int find_mean(unsigned char *arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: find_median
 * Description:
 * This function takes a set of numbers and returns the median value.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     median value
 *****************************************************************************/
unsigned char find_median(unsigned char *arrList, const unsigned int arrSize);

/******************************************************************************
 * Function: print_statistics
 * Description:
 * This function prints the statistics of a set of numbers including minimum, maximum, mean, and median.  
 * Parameters:
 *     unsigned char * const: Pointer to a data set
 *     const unsigned int   : Number of items in data set
 * Return: 
 *     void
 *****************************************************************************/
void print_statistics(unsigned char * const arrList, const unsigned int arrSize);

#endif /* __STATS_H__ */
