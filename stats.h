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
 * @file stats.h 
 * @brief Conatins headers and Function declarations which is used by stats.h
 *
 *
 *
 * @author Murlimanohar
 * @date 25-08-2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * Takes an array and size of array and determines minimum , maximum, mean and median.
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Nothing
 */
void print_statistics(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Nothing
 */

void print_array(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Median value of array
 */

unsigned char find_median(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Mean value of array
 */

unsigned char find_mean(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Maximum value of the array
 */

unsigned char find_maximum(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Minimum value of the array
 */

unsigned char find_minimum(unsigned char test[], int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 *
 * @param test array to print statistics
 * @param size which contains number of values in array
 *
 * @return Nothing
 */

void sort_array(unsigned char test[], int size);


#endif /* __STATS_H__ */
