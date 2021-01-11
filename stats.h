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
 * @brief Embedded Software HW1
 *
 * Instructions:
	This is the 1st HW of the Coursera Course Embedded Software.
		main() - The main entry point for your program
		print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
		print_array() - Given an array of data and a length, prints the array to the screen
		find_median() - Given an array of data and a length, returns the median value
		find_mean() - Given an array of data and a length, returns the mean
		find_maximum() - Given an array of data and a length, returns the maximum
		find_minimum() - Given an array of data and a length, returns the minimum
		sort_array() - Given an array of data and a length, sorts the array from largest to smallest. 
			(The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author Tushar Patil
 * @date 11/01/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/* print_statistics() */ 
void print_statistics(float median, float mean, int maximum, int minimum);

/**
 * @brief This function will print the calculated statistics
 *
 * Print statistics function prints all of the calculated statistics and prints them out
 *
 * @param test[] Array of size "SIZE"
 *
 * @return VOID
 */



/* sort_array() */ 
void sort_array(unsigned char test[]);

/**
 * @brief This function will sort the array from the largest to the smallest value.
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return VOID
 */
 
 /* print_array() */ 
 
 int find_maximum(unsigned char test[]);

/**
 * @brief This function will print the calculated statistics
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return maximum
 */
 
int find_minimum(unsigned char test[]);

/**
 * @brief This function will print the calculated statistics
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return minimum
 */
 
 
 int find_median(unsigned char test[]);

/**
 * @brief This function will print the calculated statistics
 
 *
 * @param test[] Array of size "SIZE"
 *
 * @return median
 */

 
 float find_mean(unsigned char test[]);

/**
 * @brief This function will print the calculated statistics
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return mean
 */
 
 


/* sort_array() */ 


#endif /* __STATS_H__ */