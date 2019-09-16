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
 * @brief Statistical Analysis of Data set
 *
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() - Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() - Given an array of data and a length, returns the mean
 * find_maximum() - Given an array of data and a length, returns the maximum
 * find_minimum() - Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @author Murlimanohar
 * @date 25-08-2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  //Fun call Prints the array Elements
  print_array(test,SIZE);

  //Fun Call to Sort all the elements
  sort_array(test,SIZE);
  printf("* SORTED ARRAY * \n");
  for(int i=0 ; i < SIZE; i++)
  {
	  printf("test [%d] = %d \n",i,test[i]);
  }

  //Function call to Print Minimum , Maximum , Mean and Median.
  print_statistics(test,SIZE);

}

void print_statistics(unsigned char test[], int size)
{
  printf("* PRINT STATISTICS *\n");
  printf("Minimum Element of the array %d\n", find_minimum(test,size));
  printf("Maximum Element of the array %d\n",find_maximum(test,size));
  printf("Mean of Array is :: %d\n",find_mean(test,size));
  printf("Median of Array is :: %d\n",find_median(test,size));
}

void print_array(unsigned char test[], int size)
{
     for ( int i = 0; i < size ; i++ )
     {
             printf("test [%d] = %d \n",i,test[i]);
     }      
}

unsigned char find_median(unsigned char test[], int size)
{
      sort_array(test,size); // Sort before Finding median
      if(size % 2 != 0)
      {
	      return test[size/2];
      }
      else
      {
	      return (test[(size-1)/2]+test[size/2])/2;
      }
}

unsigned char find_mean(unsigned char test[], int size)
{
      unsigned int sum = 0;
      unsigned char mean;

      for(int i = 0 ; i < size ; i++ )
      {
	      sum = sum + test[i];
      }
      mean = sum / size;
}

unsigned char find_maximum(unsigned char test[], int size)
{
    int maximum = test[0];
    for(int i = 0 ; i < size ; i++ )
    {
	    if( test[i] > maximum)
	    {
		    maximum = test[i];
	    }
    }
    return maximum;
}

unsigned char find_minimum(unsigned char test[], int size)
{
    int minimum = test[0];
    for(int i = 0 ; i < size ; i++ )
    {
            if( test[i] < minimum)
            {
                    minimum = test[i];
            }
    }
    return minimum;
}

void sort_array(unsigned char test[], int size)
{
	unsigned char temp;
         for(int i = 0 ; i < size ; i++)
	 {
		 for (int j = i+1 ; j < size ; j++)
		 {
			 if(test[i] < test[j])
			 {
				 temp = test[i];
                                 test[i] = test[j];
                                 test[j] = temp;
			 }
		 }
	 }
}
